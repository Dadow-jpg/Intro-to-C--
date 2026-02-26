// this is a program for printing hello world.
/*this is a multiline comment.
you can write a lot more*/

#include<iostream>
using namespace std;



int main(){
    cout << "hello world!";
    cout << endl;
    cout << endl;
    // next i want to add two numbers...
    cout << "this program will add and multiply two numbers for you.";
    cout << endl;
    int num1;
    int num2;

    cin >> num1;
    cin >> num2;
    cout << " enter num1: ";
    cout << " enter num2: ";
    // this is where we add the numbers
    int sum;
    sum = num1 + num2;
    cout << endl;
    cout << "sum of the two numbers: ";
    cout << sum;


    // this is where we multiply the numbers...

    cout << "\nProduct of the two numbers is" << num1 * num2;
    cout << endl;
    // divide the two numbers.
    int divide;
    divide = num1 / num2;
    cout << "\nDivision the two numbers is " << divide;


}