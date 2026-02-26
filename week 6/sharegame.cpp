// could not meet my partner. done alone.


#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

    // Static array 
    int scores[4] = {5,6,7,8};
    cout << "First score: " << scores[0] << endl;
    cout << "Last score: " << scores[3] << endl;

    // PLAYER 1 VECTORS
    vector<string> soldierNames;
    vector<int> soldierPower;
    
    // Add  push_back
    soldierNames.push_back("Warrior");
    soldierPower.push_back(50);
    soldierNames.push_back("Archer");
    soldierPower.push_back(30);
    soldierNames.push_back("Knight");
    soldierPower.push_back(70);

    cout << "First Soldier: " << soldierNames[0] << " Power: " << soldierPower[0] << endl;
    cout << "Total soldiers: " << soldierNames.size() << endl;

    // Show all soldiers
    cout << "\nYour Army:" << endl;
    for(int i = 0; i < soldierNames.size(); i++){
        cout << "Soldier " << i+1 << ": " << soldierNames[i] 
             << " Power: " << soldierPower[i] << endl;
    }

    int choice;
    
    cout << "\nEnter what you would like to do: \n";
    cout << "1. Add soldier \n";
    cout << "2. Remove last soldier \n";
    cout << "3. View army \n";
    cout << "0. Quit \n";
    cout << "Choice: ";
    cin >> choice;

    switch(choice){
        case 1: { // Add soldier
            string name;
            int power;
            cout << "Enter soldier name: ";
            cin >> name;
            cout << "Enter power: ";
            cin >> power;
            soldierNames.push_back(name);
            soldierPower.push_back(power);
            cout << name << " added!" << endl;
            break;
        }
        
        case 2: { // Remove last soldier
            if(soldierNames.size() > 0){
                cout << soldierNames.back() << " removed!" << endl;
                soldierNames.pop_back();
                soldierPower.pop_back();
            }
            break;
        }
        
        case 3: { // View army
            for(int i = 0; i < soldierNames.size(); i++){
                cout << "Soldier " << i+1 << ": " << soldierNames[i] 
                     << " Power: " << soldierPower[i] << endl;
            }
            break;
        }
        case 4: { // Undo Last Treasure (pop_back)
            if(soldierNames.size() > 0){
                cout << "Undo last: " << soldierNames.back() << " removed!" << endl;
                soldierNames.pop_back();
                soldierPower.pop_back();
            }
            break;
        }

        
        case 5: { // Power boost (all +10)
            for(int i = 0; i < soldierPower.size(); i++){
                soldierPower[i] = soldierPower[i] + 10;
                cout << soldierNames[i] << " power now: " << soldierPower[i] << endl;
            }
            cout << "All soldiers powered up! +10 each!" << endl;
            break;
        }
        
        case 6: { // Reverse inventory
            vector<string> tempNames;
            vector<int> tempPower;
            
            for(int i = soldierNames.size() - 1; i >= 0; i--){
                tempNames.push_back(soldierNames[i]);
                tempPower.push_back(soldierPower[i]);
            }
            
            soldierNames = tempNames;
            soldierPower = tempPower;
            
            cout << "Inventory reversed!" << endl;
            for(int i = 0; i < soldierNames.size(); i++){
                cout << "Soldier " << i+1 << ": " << soldierNames[i] 
                     << " Power: " << soldierPower[i] << endl;
            }
            break;
        }
        
        case 7: { // Compare inventories
            vector<string> otherNames;
            vector<int> otherPower;
            
            cout << "Enter other player's soldiers (enter 0 to stop):" << endl;
            while(true){
                string name;
                cout<< "Soldier name (or 0 to stop): ";
                cin>> name;
                if(name == "0") break;
                
                int power;
                cout<< "Power: ";
                cin>> power;
                
                otherNames.push_back(name);
                otherPower.push_back(power);
            }}
            
        
        case 0:{
            cout << "Ready for battle!" << endl;
            break;
            
        default:
            cout << "Invalid choice!" << endl;
            break;
    }


}
}