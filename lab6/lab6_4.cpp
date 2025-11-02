#include <iostream>
using namespace std;

int sum_of_digits(int n) {
    return (n == 0) ? 0 : (n % 10) + sum_of_digits(n / 10);
}

int main() {
    int n;
    cout << "Enter integer: ";
    cin >> n;

    if (n < 0) n = -n;

    cout << "Result: " << sum_of_digits(n) << endl;
    return 0;
}
