/* PLayer can find enimies, rest, or quit. 
Nested loops display enemy waves, and 
the game will end when players win ,lose or quit.*/

#include<iostream>
#include<cstdlib>
using namespace std;
int main(){

    enum GameState {PLAYING, WON, LOSE, QUIT };
    GameState state = PLAYING;

    int health = 10, round = 1;

    enum difficultyLevel {EASY, HARD};
    difficultyLevel currentDifficulty;
    int baseDamage = 10;
    int damageMin, damageMax, healAmount, enemyBaseCount;
        
        
    

    cout << "Welcome to THE ARENA OF DEATH\n\n";

    cout << "Select Difficulty:\n";
    cout << "1. Easy Mode\n";
    cout << "2. Hard Mode\n";
    cout << "Choose your difficulty: ";
    
    int difficultyChoice;
    cin >> difficultyChoice;

     if (difficultyChoice == 1) {
        currentDifficulty = EASY;
        // Easy mode parameters - actually EASY
        int damageMin = 1;
        int damageMax = 3;
        int healAmount = 4;
        int enemyBaseCount = 2;
        
        
        cout << "\n=== EASY MODE ===\n";
        cout << "You start with " << health << " health.\n";
        cout << "1. You take 1-3 damage\n";
        cout << "2. You heal " << healAmount << " when resting\n";
        cout << "3. " << enemyBaseCount << "+ round enemies per wave\n";
    } else {
        currentDifficulty = HARD;
        // Hard mode parameters - actually HARD
        damageMin = 3;
        damageMax = 8;
        healAmount = 1;
        enemyBaseCount = 5;
        
        
        cout << "\n=== HARD MODE ===\n";
        cout << "You start with " << health << " health.\n";
        cout << "1. You take 3-8 damage\n";
        cout << "2. You heal " << healAmount << " HP when resting\n";
        cout << "3. " << enemyBaseCount << "+ round enemies per wave\n";
    }
    
    
    
    cout << "\nPress Enter to begin...";
    cin.ignore();
    cin.get();

    while (state == PLAYING){

        cout <<"\n============\n";
        cout << "Round: " << round << endl;
        cout << "Heath: " << health << endl;

        int choice;

        cout << "\n1. Fight\n ";
        cout <<" \n2. Rest\n ";
        cout << "\n3. Quit\n" ;
        cout <<" Choose your path: ";
        cin>> choice;

        switch (choice){
            case 1 :    //fight 
                cout << "\nBeware Enemies approaching!\n";

                for (int row = 0; row < round ; row++){
                    for(int col = 0; col < 5; col++){
                        cout << "#";
                    }
                    cout << endl;
                }
                {
                    int damage = rand()%4 +1;
                    health -= damage;
                    cout <<"You took " << damage << " damage!\n";

                }
                break;
            case 2:         // rest
                health += 2;

                cout <<"You've recovered 2 health.\n";
                break;

                
            case 3:          //Quit
                state = QUIT;
                break;

                default:
                cout <<"Invalid Choice!\n";
                continue;

        }
        if ( health <= 0 ){
            state = LOSE;
            break;  // Break out of while loop
        }

        round++;
        
        if (round > 5){
                state = WON;
                cout <<"Your IN EASY mode!!\n";
                break;
        }
        if (round == 4 && health < 5){
                health = health + 2;
                cout << "You get a a Health Boost!!"<< endl;
                break;
        }

    }
    

    cout << "\n++++++++++++++++++++\n";
    switch(state){
        case WON:
            cout <<"You survived the arena!!\n";
            break;
        case LOSE:
            cout <<" You were defeated by the arena!\n";
            
        case QUIT:
            cout <<"You quit the arena!!\n";
            break;
        default:
            break;
        
    
    }


}