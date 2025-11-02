#include <iostream>
using namespace std;

void multiply_with_pointer(int* ptr, int multiplier) {
    *ptr *= multiplier;
}

int main() {
    int number;
    int multiplier;

    cout << "Enter an integer (1–100): ";
    cin >> number;

    cout << "Enter multiplier (1–100): ";
    cin >> multiplier;

    multiply_with_pointer(&number, multiplier);

    cout << "Result: " << number << endl;

    return 0;
}
