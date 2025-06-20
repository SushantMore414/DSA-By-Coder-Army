#include<iostream>
using namespace std;

int squrt(int n){
  if (n==1)
  {
  return 1;
  }
  
    return n*n+(squrt(n-1));
  


}
int main()
{
  int n=3;
  cout<<squrt(n);

return 0;
}