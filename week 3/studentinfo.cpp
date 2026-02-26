/*this program stores and prints student information and proforms simple calculations */

#include <iostream>
#include<string>

using namespace std;

int main(){
    //decalre variable.....
    string studentName;
    int studentAge;
    double creditsCompleted, studentGPA, creditsRemaining, studentID;


    //Assign values....
    studentName = "Nimo Dadow";
    studentAge = 70;
    creditsCompleted = 100.5;
    studentGPA = 1.5;
    bool isFulltime = true;

    //calculate the remaining credit(assume 120 to graduate)
    creditsRemaining = 120 - creditsCompleted;

    cout << "Student information" << endl;
    cout <<"---------------------" << endl;
    

    cout<< "Please enter your Full Name: ";
    getline(cin, studentName);
    cout  << "Enter student ID: ";
    cin >> studentID;
    cout<< "Enter your Age: ";
    cin >> studentAge;
    cout << "Enter your GPA: ";
    cin >> studentGPA;
    cout << "Enter yoor Completed Credits: ";
    cin >> creditsCompleted;
    cout << endl;
   
    creditsRemaining = 120 - creditsCompleted;

    if(isFulltime){
        cout << "Student is full time." << endl << endl;
    } else{
        cout << "Student is part-time." << endl << endl;;
    }
    
    cout << "Credit Summary of " << studentName << endl;
    cout << "-------------"  << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "Age: " << studentAge << endl;
    cout << "GPA: " << studentGPA << endl;
    cout << "Credits Completed: " << creditsCompleted << endl;
    cout << "Credits Remaining: " << creditsRemaining << endl;

    


}