#include <iostream>
#include <cmath>

using namespace std;

int main() {

    while (true) {
        cout << "Select Between (1.Perimeter or 2.Area) or [0] for exit : ";
        int program;
        cin >> program;

        if (program == 1) {
            while (true) {
                cout << "1. Square" << endl << "2. Rectangle" << endl << "3. Triangle" << endl << "4. Rhombus" << endl
                     << "5. Parallelogram" << endl << "6. Trapezoid" << endl << "7. Circle" << endl;
                cout << "Select Your Shape [0] for exit: ";
                int selShape;
                cin >> selShape;
                if (selShape == 1) {
                    cout << "Square Perimeter" << endl;
                    cout << "Enter Side of Square: ";
                    double square;
                    cin >> square;
                    square = 4 * square;
                    cout << "Your Square Perimeter is : " << square << endl;
                }
                if (selShape == 2) {
                    cout << "Rectangle Perimeter" << endl;
                    cout << "Enter Length of Rectangle : ";
                    double rectangleLength;
                    cin >> rectangleLength;
                    cout << "Enter Width of Rectangle : ";
                    double rectangleWidth;
                    cin >> rectangleWidth;
                    double rectangle = 2 * (rectangleLength * rectangleWidth);
                    cout << "Your Rectangle Perimeter is : " << rectangle << endl;
                }
                if (selShape == 3) {
                    cout << "Triangle Perimeter" << endl;
                    cout << "Enter First Side of Triangle : ";
                    double triangle1Side;
                    cin >> triangle1Side;
                    cout << "Enter Second Side of Triangle : ";
                    double triangle2Side;
                    cin >> triangle2Side;
                    cout << "Enter Base of Triangle : ";
                    double triangleBase;
                    cin >> triangleBase;
                    double triangle = (triangle1Side + triangle2Side + triangleBase);
                    cout << "Your Triangle Perimeter is : " << triangle << endl;
                }
                if (selShape == 4) {
                    cout << "Rhombus Perimeter" << endl;
                    cout << "Enter Side of Rhombus : ";
                    double rhombus;
                    cin >> rhombus;
                    rhombus = 4 * rhombus;
                    cout << "Your Rhombus Perimeter is : " << rhombus << endl;
                }
                if (selShape == 5) {
                    cout << "Parallelogram Perimeter" << endl;
                    cout << "Enter Base of Parallelogram : ";
                    double parallelogramBase;
                    cin >> parallelogramBase;
                    cout << "Enter Side of Parallelogram : ";
                    double parallelogramSide;
                    cin >> parallelogramSide;
                    double parallelogram = 2 * (parallelogramBase + parallelogramSide);
                    cout << "Your Parallelogram Perimeter is : " << parallelogram << endl;
                }
                if (selShape == 6) {
                    cout << "Trapezoid Perimeter" << endl;
                    cout << "Enter Large Base of Trapezoid : ";
                    double trapezoidLBase;
                    cin >> trapezoidLBase;
                    cout << "Enter Small Base of Trapezoid : ";
                    double trapezoidSBase;
                    cin >> trapezoidSBase;
                    cout << "Enter First Side of Trapezoid : ";
                    double trapezoid1Side;
                    cin >> trapezoid1Side;
                    cout << "Enter Second Side of Trapezoid : ";
                    double trapezoid2Side;
                    cin >> trapezoid2Side;
                    double trapezoid = trapezoidLBase + trapezoidSBase + trapezoid1Side + trapezoid2Side;
                    cout << "Your Trapezoid Perimeter is : " << trapezoid << endl;
                }
                if (selShape == 7) {
                    cout << "Circle Perimeter" << endl;
                    cout << "Enter Radius of Circle : ";
                    double circleRadius;
                    cin >> circleRadius;
                    double circle = 2 * M_PI * circleRadius;
                    cout << "Your Circle Perimeter is : " << circle << endl;
                }
                if (selShape >= 8) {
                    cout << "Wrong Choice " << endl;
                }
                if (selShape == 0)
                {
                    break;
                }
            }
        }
        if (program == 2) {
            while (true) {
                cout << "1. Square" << endl << "2. Rectangle" << endl << "3. Triangle" << endl << "4. Rhombus" << endl
                     << "5. Parallelogram" << endl << "6. Trapezoid" << endl << "7. Circle" << endl;
                cout << "Select Your Shape [0] for exit: ";
                int selShape;
                cin >> selShape;
                if (selShape == 1) {
                    cout << "Square Area" << endl;
                    cout << "Enter Side of Square : ";
                    double square;
                    cin >> square;
                    square *= square;
                    cout << "Your Square Area is : " << square << endl;
                }
                if (selShape == 2) {
                    cout << "Rectangle Area" << endl;
                    cout << "Enter Length of Rectangle : ";
                    double rectangleLength;
                    cin >> rectangleLength;
                    cout << "Enter Width of Rectangle : ";
                    double rectangleWidth;
                    cin >> rectangleWidth;
                    double rectangle = rectangleLength * rectangleWidth;
                    cout << "Your Rectangle Area is : " << rectangle << endl;
                }
                if (selShape == 3) {
                    cout << "Triangle Area" << endl;
                    cout << "Enter Base of Triangle : ";
                    double triangleBase;
                    cin >> triangleBase;
                    cout << "Enter Height of Triangle : ";
                    double triangleHeight;
                    cin >> triangleHeight;
                    double triangle = (triangleBase * triangleHeight) / 2;
                    cout << "Your Triangle Area is : " << triangle << endl;
                }
                if (selShape == 4) {
                    cout << "Rhombus Area" << endl;
                    cout << "Enter Large Diagonal of Rhombus: ";
                    double rhombusLDiagonal;
                    cin >> rhombusLDiagonal;
                    cout << "Enter Small Diagonal of Rhombus: ";
                    double rhombusSDiagonal;
                    cin >> rhombusSDiagonal;
                    double rhombus = (rhombusLDiagonal * rhombusSDiagonal) / 2;
                    cout << "Your Rhombus Area is : " << rhombus << endl;
                }
                if (selShape == 5) {
                    cout << "Parallelogram Area" << endl;
                    cout << "Enter Base of Rhombus : ";
                    double parallelogramBase;
                    cin >> parallelogramBase;
                    cout << "Enter Height of Rhombus : ";
                    double parallelogramHeight;
                    cin >> parallelogramHeight;
                    double parallelogram = parallelogramBase * parallelogramHeight;
                    cout << "Your Parallelogram Area is : " << parallelogram << endl;
                }
                if (selShape == 6) {
                    cout << "Trapezoid Area" << endl;
                    cout << "Enter Large Base of Trapezoid : ";
                    double trapezoidLBase;
                    cin >> trapezoidLBase;
                    cout << "Enter Small Base of Trapezoid : ";
                    double trapezoidSBase;
                    cin >> trapezoidSBase;
                    cout << "Enter Height of Trapezoid :";
                    double trapezoidHeight;
                    cin >> trapezoidHeight;
                    double trapezoid = ((trapezoidLBase * trapezoidSBase) * trapezoidHeight) / 2;
                    cout << "Your Trapezoid Area is : " << trapezoid << endl;
                }
                if (selShape == 7) {
                    cout << "Circle Area" << endl;
                    cout << "Enter Radius : ";
                    double circleRadius;
                    cin >> circleRadius;
                    double circle = (circleRadius * circleRadius) * M_PI;
                    cout << "Your Circle Area is : " << circle << endl;
                }
                if (selShape >= 8) {
                    cout << "Wrong Choice " << endl;
                }
                if (selShape == 0)
                {
                    break;
                }
            }
        }
        if (program >= 3) {
            cout << "Wrong Choice" << endl;
        }
        if (program == 0) {
            break;
        }
    }
}