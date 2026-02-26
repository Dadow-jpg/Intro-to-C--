#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

    // Static array...
    int scores[4] = {5,6,7,8};
    cout << "First score: " << scores[0] << endl;
    cout << "Last score: " << scores[3] << endl;

    // Vectors for treasures
    vector<int> treasure;
    vector<string> names;
    
    // Add starting treasures
    treasure.push_back(50);
    names.push_back("Steve");
    treasure.push_back(100);
    names.push_back("Silver");
    treasure.push_back(25);
    names.push_back("Gold");
    treasure.push_back(75);
    names.push_back("Husky");
    treasure.push_back(200);
    names.push_back("Bronze");
    treasure.push_back(28);
    names.push_back("Dog");

    cout << "First Treasure: " << treasure[0] << endl;
    cout << "total items: " << treasure.size() << endl;

    // Show all treasures
    cout << "\nAll Treasures:" << endl;
    for(int i = 0; i < treasure.size(); i++){
        cout << "Treasure " << i+1 << ": " << names[i] << " $" << treasure[i] << endl;
    }

    int choice;
    
    cout << "\nEnter what you would like to do: \n";
    cout << "1. Add treasure \n";
    cout << "2. View Treasure \n";
    cout << "3. Total Value \n";
    cout << "4. Highest and Lowest \n";
    cout << "5. Find Duplicates \n";
    cout << "0. Quit \n";
    cout << "Choice: ";
    cin >> choice;

    switch(choice){
        case 1: { // Add treasure
            string name;
            int value;
            cout << "Enter treasure name: ";
            cin >> name;
            cout << "Enter treasure value: ";
            cin >> value;
            names.push_back(name);
            treasure.push_back(value);
            cout << name << " added!" << endl;
            break;
        }
        

        case 2: { // View treasure
            for(int i = 0; i < treasure.size(); i++){
                cout << "Treasure Name for treasure " << i+1 << " is " << names[i] << endl;
                cout << "Treasure " << i+1 << ": $" << treasure[i] << endl;
            }
            break;
        }



        case 3: { // Total value
            int total = 0;
            for(int i = 0; i < treasure.size(); i++){
                total += treasure[i];
            }
            cout << "Total treasure: $" << total << endl;
            break;
        }
        case 4: { // Highest and lowest
            if(treasure.size() > 0){
                int highest = treasure[0];
                int lowest = treasure[0];
                string highName = names[0];
                string lowName = names[0];
                
                for(int i = 1; i < treasure.size(); i++){
                    if(treasure[i] > highest){
                        highest = treasure[i];
                        highName = names[i];
                    }
                    if(treasure[i] < lowest){
                        lowest = treasure[i];
                        lowName = names[i];
                    }
                }
                
                cout << "Highest: " << highName << " $" << highest << endl;
                cout << "Lowest: " << lowName << " $" << lowest << endl;
            }
            break;
         }
        
        case 5: { // find duplicates
            if(treasure.size() > 1){
                cout << "Duplicate values: " << endl;
                bool found = false;
                
                for(int i = 0; i < treasure.size(); i++){
                    for(int j = i + 1; j < treasure.size(); j++){
                        if(treasure[i] == treasure[j]){
                            cout << "$" << treasure[i] << " (" << names[i] << " and " << names[j] << ")" << endl;
                            found = true;
                        } }}


                if(found == false){
                    cout << "No duplicates found" << endl;
                }
            }
            else {
                cout << "Not enough treasures" << endl;
            }
            break;
        }
        case 0:
            cout << "You Quit...." << endl;
            break;

        default:
            break;
    }


}