#include<iostream>

using namespace std;
 int main(){
  int arr[]={3,7,13,19,27,29,35};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target=16,start=0,end=0;
   while (end<n)
   {
    if (arr[end]-arr[start]==target)
    {
      cout<<end<<','<<start<<endl;
      // start++;end++;//for more next accerance
      return 0;

    }
    else if (arr[end]-arr[start]<target)
    {
      end++;
    }
    else
    start++;
    
   }
   
   

 }