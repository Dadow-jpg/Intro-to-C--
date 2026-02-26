#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

const double HOMEWORK_WEIGHT = 0.40;
const double MIDTERM_WEIGHT = 0.25;
const double FINAL_WEIGHT = 0.35;

int main(){

    // Each score is between 0 and 100.
    double firstHomework;
    double secondHomework;
    double thirdHomework;
    double midTerms;
    double finalExam;
    double finalGrade;
    double homeworkAverage;

   


    //program header
    cout << "Calculate Final Course Grades (between (0-100))" << endl;
    cout << "---------------------";
    cout << endl;

    // prompt 
    cout <<"Enter the homework 1: ";
    cin >> firstHomework;
    cout << endl;


    // prompt 
    cout <<"Enter the homework 2: ";
    cin >> secondHomework;
    cout << endl;

    // prompt
    cout <<"Enter the homework 3: ";
    cin >> secondHomework;
    cout << endl;
    
    // prompt
    cout <<"Enter the Midterm Exam: ";
    cin >> midTerms;
    cout << endl;

    // prompt
    cout <<"Enter the Final Exam: ";
    cin >> finalExam;
    cout << endl;

    finalGrade = homeworkAverage * HOMEWORK_WEIGHT + midTerms * MIDTERM_WEIGHT + finalExam * FINAL_WEIGHT;

    homeworkAverage = (firstHomework + secondHomework + thirdHomework)/3.0;

   
       /* The three homework scores
The homework average
The midterm score
The final exam score
The computed final course grade*/

cout << "Summary" << endl;
cout << "------------" << endl;
cout << "Homework Average: " << homeworkAverage << endl;
cout << "Midterm: " << midTerms <<  endl;
cout << "Final Exam: " << finalExam << endl;
cout << "Final course grade: " << finalGrade << endl;
cout << "----------------" << endl;
cout << "COMPLETED" << endl;



}