#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>arr={2,3,5,6};
  cout<<"given array"<<endl;
  for (int i = 0; i <arr.size(); i++)
{
  cout<<arr[i]<<" ";
}

  // create a new arraay
  vector<int>prefix(arr.size());
   prefix[0]=arr[0];  

   for (int i = 1; i <arr.size(); i++)
   {
    prefix[i]=prefix[i-1]+arr[i];
   }
   cout<<endl;
   cout<<"appling prefix"<<endl;
for (int i = 0; i <prefix.size(); i++)
{
  cout<<prefix[i]<<" ";
}



}