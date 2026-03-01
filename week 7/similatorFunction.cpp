#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//Declare your function....

void printWelcome();
void printStats(int health, int attack);
void printMenu();
int getChoice();
int calculateDamage(int attack, int defense);
bool isCriticalHit();
int getValidChoice();
void bewareEnemies(int round);
void recoverHealth(int &playerHealth);
GameState checkGameState(int choice, GameState state);

enum GameState {PLAYING, WON, LOSE, QUIT};
GameState state = PLAYING;

int main(){
    int health = 1, attack = 10, defense = 5, playerHealth = 50;
    
    srand(time(0));
    
    printWelcome();
    printStats(health, attack);
    
    int path = getChoice();
    
    cout << "Damage is: " << calculateDamage(attack, defense) << endl;
    cout << "Damage is: " << calculateDamage(45, 10) << endl;
    cout << "Damage is: " << calculateDamage(41, 13) << endl;
    cout << "Damage is: " << calculateDamage(1, 9) << endl;
    
    if(isCriticalHit()){
        cout << "That was a critical hit!" << endl;
    } else{
        cout << "You are okay ... for now." << endl;
    }
    
    int blue = getValidChoice();
    bewareEnemies(3);
    
    cout << "Initial health: " << playerHealth << "\n";
    recoverHealth(playerHealth);
    cout << "New health: " << playerHealth << "\n";
    
    state = checkGameState(blue, state);
    
    return 0;
}

void printWelcome() {
    cout << "WELCOME TO THE ARENA OF DEATH\n\n";
}

void printStats(int health, int attack) {
    cout << " Health: " << health << endl;
    cout << " Attack: " << attack << endl;
}

void printMenu() {
    cout << "\n1. Fight\n";
    cout << "2. Rest\n";
    cout << "3. Quit\n";
    cout << "Choose your path: ";
}

int getChoice() {
    int num;
    printMenu();
    cin >> num;
    return num;
}

int calculateDamage(int attack, int defense) {
    int damage = attack - (defense/2);
    if(damage < 0) damage = 0;
    return damage;
}

bool isCriticalHit() {
    return (rand() % 100) < 20;
}

int getValidChoice() {
    int choice;
    do {
        printMenu();
        cin >> choice;
    } while(choice != 1 && choice != 2 && choice != 3);
    return choice;
}

void bewareEnemies(int round) {
    cout << "\nBeware Enemies approaching!\n";
    for(int row = 0; row < round; row++){
        for(int col = 0; col < 5; col++){
            cout << "#";
        }
        cout << endl;
    }
}

void recoverHealth(int &playerHealth) {
    playerHealth += 2;
    cout << "You've recovered 2 health.\n";
}

GameState checkGameState(int choice, GameState state) {
    if(choice == 3){
        return QUIT;
    }
    return state;
}