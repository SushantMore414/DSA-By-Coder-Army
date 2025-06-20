#include<iostream>
using namespace std;
int main(){
  int arr[]={2,6,7,8,3};
  int n=sizeof(arr)/4;
  int x=8;

  for (int  i = 0; i <n-1; i++)
  {
    if (arr[i]==x)
    {
      cout<<i;
    }
    
  }
  return 0;
  
}