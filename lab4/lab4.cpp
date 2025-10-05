#include <iostream>
using namespace std;

int main() {
    // ---------------------------------
    // Task 1
    // ---------------------------------
    cout << "=== Task 1 ===" << endl;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 16) {
        cout << "Yes - you can drive!" << endl;
    }

    cout << endl;



    // ---------------------------------
    // Task 2
    // ---------------------------------
    cout << "=== Task 2 ===" << endl;

    int person_age;
    bool has_car;

    cout << "Enter your age: ";
    cin >> person_age;

    cout << "Do you have a car? (1 = yes, 0 = no): ";
    cin >> has_car;

    if (person_age < 16) {
        int years_left = 16 - person_age;
        cout << "Sorry, come back in " << years_left
             << " years and be sure you own a car when you come back." << endl;
    } else {
        if (!has_car) {
            cout << "Sorry, you need to buy a car before you can drive!" << endl;
        } else {
            cout << "Yes - you can drive!" << endl;
        }
    }

    cout << endl;



    // ---------------------------------
    // Task 3
    // ---------------------------------
    cout << "=== Task 3 ===" << endl;

    int day_code;
    cout << "Enter day code (0-6): ";
    cin >> day_code;

    switch (day_code) {
        case 0:
            cout << "Sunday" << endl;
            break;
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Error - illegal day code" << endl;
            break;
    }

    cout << endl;
    return 0;
}
