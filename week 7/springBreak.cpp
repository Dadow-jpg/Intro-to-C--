/* nimo
    Spring Break Zombie Survival Helper
    -----------------------------------
    Topic: User-Defined Functions (Week 7–8)
    Concepts:
      - Function declarations (prototypes)
      - Function definitions
      - Parameters and return values
      - Void (print) functions
      - Functions with branches (if/else)
      - Functions with loops
      - Simple "unit test" style checking

    Story:
      It's Spring Break. Everything was fun until...
      a zombie outbreak started on the beach.

      This program helps the user estimate:
        - average zombies seen per day      //  Done
        - danger rating based on zombie sightings //done
        - total zombies over several days // Total zombies. done
        - a rough "survival chance" percentage // done
        - bool ShouldRun(int zombiesBehindYou) // done
        - void Warn() → prints a dramatic message done 

        // 
*/
#include <iostream>
#include<cstdlib>
using namespace std;

// Function declarations go here...


void printIntro();
int ZombieCount();
void DangerRating(int todayZombies);
void TotalZombie();
int SurvivalChance(int totalZombies, int days);
bool ShouldRun(int zombiesBehindYou);
void warn(bool ShouldRun);

enum state{PLAYING, QUIT};
state gameState = PLAYING;
int totalZombs = 0;
int dayCount = 0;

int main() {

// normal Declarations
  
    

    cout << "=== SPRING BREAK ZOMBIE SURVIVAL HELPER ===" << endl;

    printIntro();

    while(gameState == PLAYING){
      dayCount++;
      int todayZombies = ZombieCount();
      DangerRating(todayZombies);
      TotalZombie();

    int chance = SurvivalChance(totalZombs, dayCount);
    cout << "Survival chance: " << chance << "%" << endl;



    bool run = ShouldRun(todayZombies);
    warn(run);
    

    

    // We'll call our functions here
    }
    return 0;
}


void printIntro(){

  cout<<"\nYou were hoping for a relaxing spring break at the beach..."<<endl;
  cout<<"But suddenl, zombie outbreak sirens start blaring!!"<<endl;
  cout<<"You decide to track zombies sightings and estimate your chance of survival."<<endl;
  cout<<"Let's begin!\n"<<endl;

}

int ZombieCount(){

  int randomNumZomb;
  randomNumZomb = rand() % 50;
  cout<<randomNumZomb<<" Zombies seen this day"<<endl;
  
  totalZombs += randomNumZomb;

  return randomNumZomb;

}

void DangerRating(int todayZombies){

int dangerRating;
dangerRating = todayZombies * 2;
cout<<"DANGER RATING: "<<dangerRating<<endl;;

}

void TotalZombie(){
  cout<<"TOTAL ZOMBIES SEEN: "<<totalZombs<<endl;;
}



int SurvivalChance(int totalZombies, int days){
  if (days <= 0) return 100;

  int avgZombies = totalZombies / days;
  int chance = 100;

  if (avgZombies >= 30){
    chance = 20;
  } else if (avgZombies >= 20){
    chance = 40;
  } else if (avgZombies >= 10){
    chance = 60;
  } else if (avgZombies >= 5){
    chance = 80;
  } else {
    chance = 100;
  }

  return chance;
  
}


bool ShouldRun(int zombiesBehindYou){
  if(zombiesBehindYou > 30){
  
    cout << "Too many zombies! ";
    return true;
  } else if (zombiesBehindYou > 20){
    cout << "Getting dangerous! ";
    return true;
  }else if (zombiesBehindYou > 10){
    cout << "Might be risky. ";
    return false;
  }else{
    cout << "You're safe. ";
    return false;
  }



} 





void warn(bool ShouldRun){
  if (ShouldRun == true){

  
  cout << "\nWARNING DEATH IS NEAR!\n" << endl;
  }
  int choice;
  cout<<"Would you like to 1. Continue or 2. Quit: ";
  cin>>choice;
  switch (choice)
  {
  case 1:{
    cout<<"\nNext day:";
  }
    
    break;
  case 2:{
      gameState = QUIT;
    break;
}
  default:
    break;
  }
}