#include<iostream>
using namespace std;
int main(){
  int arr[]={2,4,6,8,9,11,15,18};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=3;

  int start=0,end=n-1,mid,ans=n;

  while(start<=end){

    mid=start+(end-start)/2;
    if (arr[mid]-mid-1>=k)
    {
      ans=mid;
      end=mid-1;
    }
    else
    start=mid+1;
    
  }
  cout<<mid+k;
  return 0;

}