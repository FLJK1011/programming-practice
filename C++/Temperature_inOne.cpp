//calculate the transform of temperature units in C++

#include <iostream>
using namespace std;

main() {
    cout << "1.Celcius to Farenhait" << endl;
    cout << "2.Farenhait to Celcius" << endl;
    cout << "3.Celcuis to Kelvin" << endl;
    cout << "4.Kelvin to Celcius" << endl;
    cout << "Choose (1-4) and [0] for Exit : ";
    int temp;
    cin >> temp;
    cout << endl;

    if (temp == 1) {
        cout << ("Enter °C : ");
        int celcius_1;
        cin >> celcius_1;
        cout << endl;
        double farenhait_1 = ((celcius_1 * 1.8) + 32);
        cout << "Your °F is : " << farenhait_1 << endl;
        cout << endl;
    }
    if (temp == 2) {
        cout << "Enter °F : ";
        int farenhait_2;
        cin >> farenhait_2;
        cout << endl;
        double celcius_2 = ((farenhait_2 - 32) / 1.8);
        cout << "Your °C is : " << celcius_2 << endl;
        cout << endl;
    }
    if (temp == 3) {
        cout << "Enter °C : ";
        int celcius_3;
        cin >> celcius_3;
        cout << endl;
        double kelvin_3 = (celcius_3 + 273.15);
        cout << "Your K is : " << kelvin_3 << endl;
        cout << endl;
    }
    if (temp == 4) {
        cout << "Enter K : ";
        int kelvin_4;
        cin >> kelvin_4;
        cout << endl;
        double celcius_4 = (kelvin_4 - 273.15);
        cout << "Your °C is : " << celcius_4 << endl;;
        cout << endl;
    }
    if (temp > 4) {
        cout << "Wrong Chocie" << endl;
    }
}
