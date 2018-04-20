#include <iostream>

#include "Quaterion.h"

using namespace std;

int main(){
    // constructors and output operator
    Quaterion quaterion1(1, 3, 5, 7);
    Quaterion quaterion2(2, 2, 2, 2);
    cout << "First quaterion       : " << quaterion1 << endl 
         << "Second quaterion      : " << quaterion2 << endl;

    // arithmetic operators
    Quaterion quaterion3 = quaterion1 + quaterion2;
    Quaterion quaterion4 = quaterion1 - quaterion2;
    Quaterion quaterion5 = quaterion1 * quaterion2;
    Quaterion quaterion6 = quaterion1 / quaterion2;
    cout << "Added quaterion       : " << quaterion3 << endl
         << "Subtracted quaterion  : " << quaterion4 << endl
         << "Multiplied quateiron  : " << quaterion5 << endl
         << "Divided quaterion     : " << quaterion6 << endl;        


    // input operator
    Quaterion quaterion7;
    cout << " Enter your quaterion in the form of a+bi+cj+dk (no spaces)" << endl;
    cin >> quaterion7;
    cout << "You entered: " << quaterion7 << endl;

    return 0;
}