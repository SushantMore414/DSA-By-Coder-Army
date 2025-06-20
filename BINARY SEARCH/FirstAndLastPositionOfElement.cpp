#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int x = 3; 
    int n = sizeof(arr)/sizeof(arr[0]);

    int first = -1, last = -1;
    int start = 0, end = n - 1,mid;

    // Finding the first occurrence
    while (start <= end) {
         mid = start + (end - start) / 2;
        if (arr[mid] == x) {
            first = mid;
            end = mid - 1;
        } else if (arr[mid] > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    // Reset variables to find the last occurrence
    start = 0, end = n - 1;

    // Finding the last occurrence
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x) {
            last = mid; 
            start = mid + 1;
        } else if (arr[mid] > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    
        cout << "First occurrence: " << first << "\nLast occurrence: " << last << endl;
    

    return 0;
}
