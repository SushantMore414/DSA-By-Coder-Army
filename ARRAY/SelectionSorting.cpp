#include <iostream>
#include <algorithm> // Include for swap function
using namespace std;

int main() {
    int arr[] = {2, 6, 7, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {  
        int index = i;
        for (int j = i + 1; j < n; j++) { 
            if (arr[j] < arr[index]) {
                index = j;
            }
        }
        swap(arr[i], arr[index]);  
    }

    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
