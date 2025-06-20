#include <iostream>
#include <algorithm> // For max function
using namespace std;

int main() {
    int arr[] = {12, 34, 67, 90}; // Pages in books
    int N = sizeof(arr) / sizeof(arr[0]); // Total books
    int m = 2, n = 4; // Students & Books

    int start = 0, end = 0, mid, ans = -1;

    // Edge Case: More students than books
    if (m > n) {
        cout << -1 << endl;
        return 0;
    }

    // Initialize start and end
    for (int i = 0; i < n; i++) {
        start = max(start, arr[i]); // Max single book pages
        end += arr[i]; // Sum of all pages
    }

    // Binary Search to find the minimum max pages allocation
    while (start <= end) {
        mid = start + (end - start) / 2;
        int pages = 0, count = 1;

        for (int i = 0; i < n; i++) {
            if (pages + arr[i] > mid) {
                count++; // Allocate to next student
                pages = arr[i];

                if (count > m) break; // More students needed
            } else {
                pages += arr[i];
            }
        }

        if (count <= m) { // Possible solution
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}
