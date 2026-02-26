/* Arrays ...*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

    // Static array...  you can not change or add onto thw array once astablished
    int scores[4] = {5,6,7,8};
    cout << "First score: " << scores[0] << endl;
    cout << "Last score: " << scores[3] << endl;

    // Vectors array.....

    vector<int>treasure;
    treasure.push_back(50);            // .push_back lets you add onto a vector erray
    treasure.push_back(100);
    treasure.push_back(25);            // tresure: {50, 100, 25
    treasure.push_back(75);            // .push_back lets you add onto a vector erray
    treasure.push_back(200);
    treasure.push_back(28);

    treasure.resize(30);



    cout << "First Treasure: " << treasure[0] << endl;
    cout << "total items: " << treasure.size() << endl;    //.size..... show size of the the array... fuction

   // Iteration...
   int total = 0;

    for(int i = 0; i < treasure.size(); i++){
        cout << "Treasure " << i+1 << ": "<< treasure[i] << endl;
        total += treasure[i];
        cout << " Running Total: " << total << endl;
    } 

    int choice;
    vector<string>names;
    names.push_back("Steve");
    names.push_back("Silver");
    names.push_back("Gold");
    names.push_back("Husky");
    names.push_back("Bronze");
    names.push_back("Dog");

    cout << "Enter what you would like to do: \n";
    cout << "Treasure Add treasure, \n2. View Treasure \n3. Total Value \n0.Quit\nChoice";
    cin >> choice;

    switch(choice){
        case 1:                                         //Add treature....
            int value;
            cout <<"Enter treasure value: ";
            cin >> value;
            treasure.push_back(value);
            break;

        case 2:                                             //VIEW treature....
            for(int i = 0; i < treasure.size(); i++){
                cout <<"Treasue Name for treasure " << i+1 << " is " << names[i] << endl;
                cout << "Treasure " << i+1 << ": "<< treasure[i] << endl;
            }
            break;

        case 3:                                                 //Total treature....
            total = 0;
            for(int i = 0; i < treasure.size(); i++){
                total += treasure[i];
            }
            cout << "Total treasure:";
            break;
        case 0:
            cout << "You Quit....";
            break;

        default:
            break;

    
    }







    

}

    





