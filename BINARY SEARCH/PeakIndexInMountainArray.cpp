#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 9, 6,4,3,2,1};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0, end = n - 1, mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (arr[mid] >arr[mid-1] && arr[mid]>arr[mid+1]){
          cout<<mid;
          return 0;
        }
        else if (arr[mid]>arr[mid-1])
        {
          start=mid+1;
        }
        else
        {
         
          end=mid-1;
        }
      }
      cout<<mid ;
      return 0;
    }
        
        