#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    // Base case
    if(n == 0) {
        return arr[0];
    }
    // Recursive case
    int finalValue = arr[n] + sumArray(arr, n-1);
    return finalValue;
}

int main() {
    int n = 3;
    int arr[] = {1, 2, 3};

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Sum of array elements is " << sumArray(arr, n-1) << endl;
    return 0;
}
