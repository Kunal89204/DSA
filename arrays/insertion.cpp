#include <iostream>
using namespace std;

void insertElement(int arr[], int &n, int pos, int value) {
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++; // Increase size of the array
}

int main() {
    int n = 5, arr[10] = {10, 20, 30, 40, 50};

    cout << "Before insertion: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    int pos, value;
    cout << "\nEnter position (0-based index) and value to insert: ";
    cin >> pos >> value;

    insertElement(arr, n, pos, value);

    cout << "After insertion: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
