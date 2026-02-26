/*rectangle area and perimeter calculater*/
#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;

const double SCALE_FACTOR = 2.0;

int main(){ 
    //Declare variable

    double height, width, area, perimeter, diagonal, halfArea;

    //program header
    cout << "Rectangle Calculater";
    cout << "---------------------";

    // prompt height
    cout <<"Enter the width of rectangle: ";
    cin>> width;

    // prompt height
    cout <<"Enter the width of rectangle: ";
    cin>> height;
    cout << endl;

    // perform calculation....
    area= width * height;
    perimeter = 2 * (width * height);
    diagonal = sqrt(pow(width,2) + pow(height,2));
    halfArea = area / SCALE_FACTOR;


    // format out put 
    cout << fixed << setprecision(2);

    cout <<"Resuts" << endl;
    cout << "----------" << endl;
    cout <<"Width: " << width << endl;
    cout <<"Height: " << height << endl;
    cout <<"Area: " << area << endl;
    cout <<"Perimeter: " << perimeter << endl;
    cout <<"Diagonal: " << diagonal << endl;
    cout << "Half of area: " << halfArea << endl;

    if(width == height){
        cout <<"This Rectangle is actually a square." << endl;
    } else{
        cout << "THis rectangle isnt actually a square." << endl;
    }

    cout << endl << "Calculation completed";

}