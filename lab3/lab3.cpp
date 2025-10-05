#include <iostream>
using namespace std;

int main() {
    // -------------------------------
    // Exercise 1
    // -------------------------------
    int num1 = 13;
    int num2 = 0;

    num1 = 5;
    num2 = num1;

    cout << "Exercise 1:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl << endl;



    // -------------------------------
    // Exercise 2
    // -------------------------------
    int original_number = 4;
    int number = original_number;

    cout << "Exercise 2:" << endl;

    number = number * 2;
    cout << "After multiplication (*2): " << number << endl;

    number = number + 9;
    cout << "After addition (+9): " << number << endl;

    number = number - 3;
    cout << "After subtraction (-3): " << number << endl;

    number = number / 2;
    cout << "After division (/2): " << number << endl;

    number = number - original_number;
    cout << "After subtracting original_number (-" << original_number << "): " << number << endl;

    number = number % 3;
    cout << "After modulo (%3): " << number << endl << endl;



    // -------------------------------
    // Exercise 3
    // -------------------------------
    int age = 17;
    bool parental_consent = true;
    bool ssn = true;
    bool accidents = false;

    cout << "Exercise 3:" << endl;

    if ((age >= 18 || (age >= 15 && parental_consent)) && ssn && !accidents) {
        cout << "You are hired!" << endl;
    } else {
        cout << "Sorry, we cannot hire you!" << endl;
    }

    cout << endl;



    // -------------------------------
    // Exercise 4
    // -------------------------------
    cout << "Exercise 4:" << endl;
    int cents;
    cout << "Enter sum in cents: ";
    cin >> cents;

    int dollars = cents / 100;
    cents = cents % 100;

    int quarters = cents / 25;
    cents = cents % 25;

    int dimes = cents / 10;
    cents = cents % 10;

    int nickels = cents / 5;
    cents = cents % 5;

    int pennies = cents;

    cout << "You can get this amount with:" << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;

    cout << endl;
    return 0;
}
