#include <iostream>
#include <vector>
using namespace std;

int main() {
    int total = 0;
    for (int i = 1; i <= 15; ++i) {
        if (i % 2 != 0)
            total += i;
    }
    cout << "Sum of odd numbers from 1 to 15: " << total << endl;

    vector<int> numbers {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    int divisible_count = 0;

    for (auto n : numbers) {
        divisible_count += (n % 3 == 0 || n % 5 == 0) ? 1 : 0;
    }

    cout << "Count of numbers divisible by 3 or 5: " << divisible_count << endl;

    return 0;
}
