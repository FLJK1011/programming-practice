#include <iostream>

using namespace std;

int main() {

    while (true) {
        cout << "Select Between (1.Perimeter or 2.Area) or [0] for exit : ";
        int program;
        cin >> program;

        if (program == 1) {
            cout << "1. Square" << endl << "2. Rectangle" << endl << "3. Triangle" << endl << "4 .Rhombus" << endl
                 << "5. Parallelogram" << endl << "6. Trapezoid" << endl << "7. Circle" << endl;
            cout << "Select Your Shape : ";
            int selShape_p;
            cin >> selShape_p;
            if (selShape_p == 1) {
                cout << "Square Area" << endl;
                cout << "Enter Side of Square : ";
                int squareArea;
                cin >> squareArea;
                squareArea *= squareArea;
                cout << "Your Square Area is : " << squareArea << endl;
            }
            if (selShape_p == 2) {
            }
            if (selShape_p == 3) {
            }
            if (selShape_p == 4) {
            }
            if (selShape_p == 5) {
            }
            if (selShape_p == 6) {
            }
            if (selShape_p == 7) {
            }
            if (selShape_p >= 8) {
                cout << "Wrong Choice " << endl;
            }
        }
        if (program == 2) {
            cout << "1. Square" << endl << "2. Rectangle" << endl << "3. Triangle" << endl << "4 .Rhombus" << endl
                 << "5. Parallelogram" << endl << "6. Trapezoid" << endl << "7. Circle" << endl;
            cout << "Select Your Shape : ";
            int selShape_a;
            cin >> selShape_a;
            if (selShape_a == 1) {
            }
            if (selShape_a == 2) {
            }
            if (selShape_a == 3) {
            }
            if (selShape_a == 4) {
            }
            if (selShape_a == 5) {
            }
            if (selShape_a == 6) {
            }
            if (selShape_a == 7) {
            }
            if (selShape_a >= 8) {
                cout << "Wrong Choice " << endl;
            }
        }
        if (program >= 3) {
            cout << "Wrong Choice" << endl;
        }
        if (program == 0) {
            break;
        }
        /*
        else{
            cout << "Wrong Choice" << endl;
        }
        */
    }
}