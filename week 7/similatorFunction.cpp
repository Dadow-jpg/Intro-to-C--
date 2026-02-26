#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//Declare your function....

void printWelcome();                
void printStats(int health, int attack);
int choice();
int calculateDamage(int attack, int defense);
bool isCritcalHit(); 
int getValidChoice();
void bewareEnemies(int round);
void recoverHealth(int playerHealth);
enum GameState {PLAYING, WON, LOSE, QUIT };
GameState state = PLAYING;
enum GameState Checkmate(int blue, GameState state);


int main(){
    int health = 1, attack = 10, defense = 5, path, playerHealth = 50;

    printWelcome();             // calling function
    printStats(health, attack);     // when calling fuction you dont add data type(void)
    path = choice();
    cout << "Damage is:" << calculateDamage(attack, defense) << endl;
    cout << "Damage is:" << calculateDamage(45, 10) << endl;
    cout << "Damage is:" << calculateDamage(41, 13) << endl;
    cout << "Damage is:" << calculateDamage(1, 9) << endl;

    if(isCritcalHit()){
        cout << "That was a critacal hit!";
    } else{
        cout <<"Your are okay ... for now.";
    }

    int blue = getValidChoice();
    bewareEnemies(3);

    cout << "Initial health: " << playerHealth << "\n";

    // Call the function
    recoverHealth(playerHealth);

    cout << "New health: " << playerHealth << "\n";

    Checkmate(blue, state);









}

//Function Defining......
void printWelcome(){                            // definite what function does // definition.....
    cout << "WELCOME TO THE ARENA OF DEATH\n\n";
}

void printStats(int health, int attack){

    cout <<" Health: " << health << endl;
    cout <<" Attack: " << attack << endl;
}

int choice(){

    int num;
    cout << "\n1. Fight\n";
    cout << "\n2. Rest\n";
    cout << "\n3. Quit\n";
    cout << "\nChoose your path\n";
    cin >> num;

    return num;
}
int calculateDamage(int attack , int defense){

    int damage;
    damage = attack - (defense/2);

    if (damage < 0){
        damage = 0;
    }

    return damage;
}

bool isCritcalHit(){
    int roll = rand() %100;
    if (roll < 20){
        return true;
    }
        return false;
}

int getValidChoice(){
    int choice;
    do{
        cout << "\n1. Fight\n";
        cout << "\n2. Rest\n";
        cout << "\n3. Quit\n";
        cout << "\nChoose your path\n";
        cin >> choice;

    } while(choice != 1  && choice != 2  && choice != 3);
    
    return choice;
}

void bewareEnemies(int round){
    cout << "\nBeware Enemies approaching!\n";
    for (int row = 0; row < round ; row++){
        for(int col = 0; col < 5; col++){
            cout << "#";
        }
            cout << endl;
    }
}



void recoverHealth(int playerHealth) {     

    playerHealth += 2;
    cout <<"You've recovered 2 health.\n";

}

enum GameState Checkmate(int blue, GameState state){
    if (blue == 3){
        state = QUIT;
        

        return state;
    }
    
} 


                

    
    




   