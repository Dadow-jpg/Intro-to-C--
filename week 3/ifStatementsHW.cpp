#include<iostream>
#include <string>

using namespace std;

int main(){
    double GPA;
    string major;
    string CS = "CS";
    string IT = "IT";
    string Other = "Other";


    cout << "Enter First Charcters of your Major (EX: Computer Science will be CS): ";
    cin >> major;

    if(major == CS){
        cout << "You are Computer Science major."<< endl;;
    } else if(major == IT){
        cout << "You are IT major."<< endl;
    } else {
        cout << "Others\n" << endl;
    }

    
    cout<<"Enter your GPA: ";
    cin >> GPA;

    if(GPA >= 3.5){
        cout << "Advanced placement" << endl;
    }else if(GPA >= 3.0){
        cout << "Intermediate Placement" << endl;
    }else if(GPA >= 2.0){
        cout << "Standard Placement" << endl;
    } else{
        cout << "Failed Placement" << endl;
    }


    cout << "------------------" << endl;

    cout << "Program finished." << endl;


    

    


    

/*Required Features
Uses at least 3 user inputs
Uses at least 5 conditional checks total
Uses if, else if, and else
Prints different outputs for different situations
Is tested with at least 4 different input cases

*/
 

}
