#include <iostream>
using namespace std;

int findMaxElement(int* arr, int size) {
    int* maxPtr = arr;  
    for (int* ptr = arr + 1; ptr < arr + size; ++ptr) {
        if (*ptr > *maxPtr) {
            maxPtr = ptr;
        }
    }
    return *maxPtr;
}

int main() {
    int arr[] = {12, 45, 67, 23, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxElement = findMaxElement(arr, size);

    cout << "Maximum element: " << maxElement << endl;
    return 0;
}
