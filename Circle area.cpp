// Circle area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double Circumference(double pi, double radius ) {
    
    return 2 *( 3.142 * radius);
}
double Area(double pi, double radius) {
    
    return 3.142 * (radius * radius);
}

int main() {
    double radius;
    double pi = 3.142;

    cout << "Enter the radius of the circle" << endl;
    cin >> radius;

    cout << "The circumference is equals to : " << Circumference(pi,radius) << endl;
    cout << "The area is equals to : " << Area(pi,radius) << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
