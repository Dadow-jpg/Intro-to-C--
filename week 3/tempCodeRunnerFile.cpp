/*Suppose string str1 is initially "Hello" and str2 is "Hi".
After str1 = str2;, what is str1?
Omit the quotes.*/

#include<iostream>
#include<string>
using namespace std;


int main(){

   string personName;
   string birthPlace;

   /* Your code goes here */
   cout << "what is your name: ";

   getline(cin, personName);

    cout << "what is your birth place" << endl;

   getline(cin, birthPlace);


   cout << personName << " was born in " << birthPlace << "." << endl;

   return 0;

}

