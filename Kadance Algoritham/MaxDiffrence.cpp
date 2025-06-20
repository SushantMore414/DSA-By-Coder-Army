#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int prefixMin = arr[0];
    int maxDiff = INT_MIN;

    for (int i = 1; i < n; i++) {
        int diff = arr[i] - prefixMin;
        prefixMin = min(prefixMin, arr[i]);
        maxDiff = max(maxDiff, diff);
    }

    cout << "Maximum difference (using prefix min): " << maxDiff << endl;
    return 0;
}
