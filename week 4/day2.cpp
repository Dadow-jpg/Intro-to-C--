#include<iostream>
#include <string>
using namespace std;

int main(){

    cout << "=== User Analyzer ====" << endl << endl;

    // boolean datatype

    bool isaAdmin = false, hasAccess = true;

    cout << " Boolean Value: " << endl;
    cout << "isAdmin: " << isaAdmin << endl;
    cout <<"hasAccess: " << hasAccess << endl;

    // order of Ev

    int a =10, b = 5, c = 2;

    int result1 = a + b * c;  // multiplicatuion happens forst
    int result2 = (a + b) * c; // parenthese her change the evatluation order

    cout << "Order of Evauation: " << endl;
    cout << "result1: " << result1 << endl;
    cout << "result2: " << result2 << endl;

    //Switch State ments
    
    int menuChoise;
    cout <<"Enter a menu chose (1-3): ";
    cin >> menuChoise;


    switch (menuChoise){
        case 1:
            cout << "You chose Option 1"<< endl;
            break;
        case 2:
            cout << "You chose Option 2" << endl;
            break;
        case 3:
            cout << "You chose Option 3"<< endl;
            break;
        default: 
            cout << "Invalid Choise" << endl;
     }
    cout << endl;
    cin.ignore();
    // string Access operation

    string role;
    cout << "Enter your role (admin/ user /  guest): ";
    getline(cin, role);

    if (role == "admin"){
        cout << "Full system access granted." << endl;
    } else if (role != "guest"){
        cout << "standerd user access." << endl;
    } else {
        cout << "Limit guest access" << endl;
    }
    cout << endl;

    //string access

    cout << "First character of role: " << role[0] << endl;
    cout << "Last character of role: " << role[role.length() - 1] << endl;

    char firstChar = role[0];

    if (isalpha(firstChar) ){
        cout <<"First charcter is a letter."<< endl;
    }

cout << "Uppercase version " << static_cast<char>(toupper(firstChar)) << endl << endl;

//find ad replace text 

int pos = role.find("ad");

if ( pos != string::npos){
    cout << "ad found at postion " << pos << endl;
} else {
    cout << "ad not found!" << endl;
}

role.insert(0,"[ROLE] ");

role.replace(0, 6, "[USER] ");

//conditional expressions....

int age = 20;

string status = (age >= 18) ? "Adult" : "Minor";

int number = 100;

if (number != 0 && (100/ number) > 2){
    cout <<"Valid number and divistion result >2 " << endl;
} else {
    cout << "short- circuit prevented division" << endl;
    }
    
}
    
    