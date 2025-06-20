#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 7};
    int x = 6; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0, end = n - 1, mid;
    int ans = n;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (arr[mid] == x){
          cout<<mid;
        }
        else if (arr[mid]<x)
        {
          start=mid+1;
        }
        else
        {
          ans=mid;
          end=mid-1;
        }
      }
      cout << "Insert position: " << ans << endl;
      return 0;
    }
        
        