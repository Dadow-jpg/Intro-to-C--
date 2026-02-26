#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main(){

/*
   // 2.15 Strings

    string fullName, firstName;
    //cout<< "\nPlease enter first name: ";
    //cin >> firstName;

    //cout << "\nYour first name using cin is: " << firstName;
    //cin leaves a newline characher that needs to be removed....
    //cin.ignore();

    //cout << "\n\nPLease enter your full name: ";
    
    getline(cin, fullName);                                 // cin doesnt do well with white space. so this is another why to get by
    
    //cout<< "\n\nYour Full name is: " << fullName;


    // 2.16 Integer Overflow

    int maxInt = 2147483647;  //Maximun value for 32 but int. // maxInt = maxInt + 1 

    // 2.17 Numeric Data type

    int age = 20;
    double gpa = 3.75;
    char grade = 'A';
    bool isEnrolled = true;


    // 2.18 Unsigned


    unsigned int score = 10;
    //cout << "\nScore: " << score << endl;

    // 2.19 Random Numbers

    srand(time(0));   // Seed Random number generator(do once)
    int randomNumber = rand() % 200 + 1;
    //cout << "\nRandom Number: "<< randomNumber << endl;

    //--------------------------------------------------
    // 2.20 Debugging 
    //--------------------------------------------------

    int x = 5, y = 0;

    // cout << x / y << endl;

    //----------------------------------------------------
    // 2.21 auto (C++11)
    //----------------------------------------------------

    auto totalCredits = 15; //int
    auto tuition = 3000.55; // double
    auto status = true;  //bool

    //-----------------------------------------------------
    // 2.22 Style Guidelines
    //------------------------------------------------------

    // - Use meaningfull variable names
    // - One statement per line 
    // - Consistant indentation
    // - Usefull comments
*/

    /* Salary Calculations*/
/*    string employeeName;
    int hoursWorked;
    double hourlyWage, employeePay;
    


    // input prompts

    cout << "\n Welcome to the Salary Calculator!!\n\n";
    cout << " \nPlease enter full name your employee: ";
    getline(cin, employeeName);
    cout << endl;
    cout  << "\nHow many hours did they work? \nHours: ";
    cin >> hoursWorked;
    cout << "\n Hourly wage? \nWage: ";
    cin >> hourlyWage;

    // calculation
    employeePay = hoursWorked * hourlyWage;

    // outputs...

    cout << endl << endl;
    cout << "Name of employee: " << employeeName << endl;
    cout << "Hours worked: " << hoursWorked << " hours" << endl;
    cout <<"Hourly wage: $" << hourlyWage << endl;
    cout <<"Weekly salary: $" << employeePay << endl;
    cout <<"Thank you for using the salaray calculator";
    */

    string userName;
    string friendName1;
    string friendName2;
    string friendName3;
    int userAge;
    int friendAge1;
    int friendAge2;
    int friendAge3;
        
    cout<< "Please enter your full name: ";
    getline(cin, userName);
    cout << "Hello " << userName << "!"<< endl;
    cout << "age: ";
    cin >> userAge;
    
    cout << "\nFriend 1: " << friendName1 <<endl ;
    cin.ignore();
    getline(cin, friendName1);
    cout << "age: ";
    cin >> friendAge1;
    
    cout << "\nFriend 2: " << friendName2 << endl;
    cin.ignore();
    getline(cin, friendName2);
    cout << "age: ";
    cin >> friendAge2;
    
    cout << "\nFriend 3: " << friendName3 << endl;
    cin.ignore();
    getline(cin, friendName3);
    cout << "age: ";
    cin >> friendAge3;
 
    cout << "\nHello " << userName << "! You are " << userAge << " years old";
    cout << "\nYour three friend names are:";
    cout <<"\nName: " << friendName1 << "Age: " << friendAge1;
    cout <<"\nName: " << friendName2 << "Age: " << friendAge2;
    cout <<"\nName: " << friendName3 << "Age: " << friendAge3;


    
       


}