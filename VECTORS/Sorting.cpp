#include<iostream>
#include<vector>
 #include <algorithm>//sorting purpose
using namespace std;

int main(){
  cout<<"Sorted in ascending order:";
  vector<int> a={4,1,7,9,0,2};
  sort(a.begin(),a.end());
  for(auto ab:a)
   cout<<ab<<" ";
   cout<<endl;
   
   cout<<"Sorted in descending order:";
  
   sort(a.begin(),a.end(),greater<int>());
   for (int i = 0; i < a.size(); i++)
   {
    cout<<a[i]<<" ";
   }
   
  
}