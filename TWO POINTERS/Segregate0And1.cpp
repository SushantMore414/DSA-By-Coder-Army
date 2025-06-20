#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[100];
    int n;

    cout << "Enter number of elements (max 100): ";
    cin >> n;

    cout << "Enter only 0 and 1 values:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int start = 0, end = n - 1;

    while (start < end) {
        if (arr[start] == 0) {
            start++;
        } else if (arr[end] == 0) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        } else {
            end--;
        }
    }
  
    cout << "Sorted binary array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}
