#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;

const double PI = 3.1415926;


int main(){
/*
Topic 1: Variable and Identify\iers
*/

int apples = 5;    //declared and initialized....
int oranges = 3;
int totalFruits = apples + oranges;

cout << "Topic 1: Variables and Identifiers\n";
cout << "Apples:" << apples << endl;
cout << "Orange:" << oranges << endl;
cout << "Total fruits:" << totalFruits << endl<< endl;

// Topic 2: Arthmetic expresstion
// basic expression

int a = 10 , b = 4;
int sum = a + b;
int diff = a - b;
int prod = a * b;
int quotient = a / b;
int remainder = a % b;

// you can print out the above variable if you like.....

// Topic 3 : Floating- point Numbers and Precision.

double price = 19.99;
double taxRate = 0.075; //7.5% sales tax....
double taxAmount = price * taxRate;
double totalPrice = taxAmount + price;

cout << "Topic 3: Floating-point numbers\n";
cout << "base Price:"<< price << endl;
cout << "Tax Rate: " << taxRate << endl;
cout << "Tax Amount: " << taxAmount << endl;

cout << fixed << setprecision(2);
// changes from scientific to fixed point...
cout << "Total price (formatted to 2 decimal point): " << totalPrice << endl;

// Topic 4: constant variable (const)

double radius = 2.5;
double circleArea = PI * radius * radius;


cout << "Topic 4: constant Varible \n";
cout << "PI(constant): "<<PI<<endl;
cout << "Radius: "<< radius << endl;
cout << "Area of circle: "<<circleArea<<endl<<endl;

//Topic 5: Math Functions...

double number = 16.0;

double root = sqrt(number);
double power = pow(2.0,8.0);    // 2^8
double absoluteValue = abs(-3.5);

cout << "topic 5 math function \n";
cout << "Square root of" << number << "is "<< root << endl;
cout << "2^8 using  pow function is " << power << endl;
cout << " abs(-3.5) is " << absoluteValue << endl << endl;

// Tpic 6: Integer divition and modulus

int totalStudents = 23, groupSize = 4;

int fullGroup = totalStudents / groupSize;
int leftOver = totalStudents % groupSize;

cout<< "Topic : Integer and Divistion\n";
cout << "Total students:" << totalStudents << endl;
cout << "group size: " << groupSize<< endl;
cout << "Full group: " << fullGroup<< endl;
cout << "Student left: "<< leftOver << endl<<endl;

// Topic 7 : TYpe Conversion (casting)

int pizzas = 7, people = 2;

//Integer division
int slicesPerPersoneInt = pizzas / people;

double slicesPerPersonDouble = static_cast<double>(pizzas)/ people; //double / int

cout << "Topic 7: type conversions" << endl;
cout << "Pizas : "<< pizzas << endl;
cout <<"People: " << people << endl;
cout << "Integer Division: " << slicesPerPersoneInt<< endl;
cout << "Floating Point Division: "<< slicesPerPersonDouble << endl<< endl;

//implicit type convertion...
double average = (pizzas + people) /2.0;

cout << "Average of pizzas and people (using 2.0):" << average << endl << endl;

// Topic 8: characters and ASCII code 

char letterA = 'A';
char letterB = 'B';
char digitChar = '7';

int codeA = static_cast <int> (letterA);
int codeB = static_cast <int> (letterB);
int codeDigit = static_cast<int>(digitChar);

cout << "ASCII code of '" << letterA << "' is: " << codeA << endl;
cout << "ASCII code of '" << letterB << "' is: " << codeB << endl;
cout << "ASCII code of '" << digitChar << "' is: " << codeDigit << endl << endl;

char nextLetter = letterA + 1;
cout << "we add 1 to '" << letterA<< "' : " << nextLetter << endl;
}