#include<iostream>
using namespace std;
int sum(int n){
  int ans=0;
   if (n==1)
   {
    return 1;
   }
  return n+sum(n-1);
}
int main()
{
  int n=10;
  cout<<sum(n);

return 0;
}