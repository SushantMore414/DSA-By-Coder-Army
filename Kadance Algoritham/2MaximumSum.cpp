#include <iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    // int arr[]={2,3,5,7,4,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxnum = INT_MIN;
    int currentsum = arr[0];

    for (int i = 0; i < n-1; i++) {
        currentsum += arr[i+1];
        maxnum = max(maxnum, currentsum);

        if (currentsum < 0) {
            currentsum = 0; 
        }
    }

    cout << "Maximum subarray sum is: " << maxnum << endl;
    return 0;
}
