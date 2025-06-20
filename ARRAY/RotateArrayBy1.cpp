#include<iostream>
using namespace std;
int main(){
  int arr[]={2,6,7,8,3};
  int n=sizeof(arr)/4;
  int temp=arr[n-1];

  for (int  i = n-2; i >=0; i--)
  {
    arr[i+1]=arr[i];
  }
  arr[0]=temp;

  
  for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
  
}