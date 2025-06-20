#include<iostream>
#include<vector>
using namespace std;

int brutforce(vector<int> &arr, int k,int n){
  int count=0;
  for (int i = 0; i < n; i++)
  {
    int sum=0;
    for (int j = i; j<n; j++){
      sum+=arr[j];
    
      if (sum==k)
      {
        count++;
      }
      
    }
  }
  cout<<count;
  return 0;
}

int main(){
   vector<int>arr={4,9,3,10,4,2,2,7,8,1};
   int k=16,n=arr.size();

   brutforce(arr,k, n);

   return 0;
}