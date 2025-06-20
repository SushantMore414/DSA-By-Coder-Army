#include<iostream>
using namespace std;
int main(){
  int arr[]={2,6,7,18,22,30};
  int n=sizeof(arr)/sizeof(arr[0]);
  int x=31;
int start=0,end=n-1,mid;
while (start<=end)
{
  mid=start+(end-start)/2;

  if (arr[mid]==x)
  {
    cout<<mid;
    break;
    
  }
  else if (arr[mid]>x)
  {
    end=mid-1;
  }else{
      start=mid+1;
  }
}
cout<<x<<" is not in array";
  return 0;
  
}