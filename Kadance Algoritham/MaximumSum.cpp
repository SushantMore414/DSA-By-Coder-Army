//Brut Force method
#include<iostream>
using namespace std;
int main(){
  int arr[]={2,3,5,7,4,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  
   int maxnum=INT_MIN;

   for (int i = 0; i < n; i++){
    int currentsum=0;
    for (int j = i; j <n; j++)
    {
      currentsum+=arr[j];
      maxnum=max(currentsum,maxnum);
      
    }
    
   }
   cout<<maxnum;
   
   

  
}