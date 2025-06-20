#include <iostream>
#include <climits>  // For INT_MIN
using namespace std;

int main() {
    int arr[] = {1,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum=0,ans=0;

    for (int i = 0; i < n-1; i++) {
        sum+=arr[i];

        ans=n*(n+1)/2;
        
    }
    cout<<ans-sum;
    return 0;
}
