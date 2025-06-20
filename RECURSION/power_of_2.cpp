#include<iostream>
using namespace std;

int pow(int base, int n){
  if (n==0)
  {
    return 1;
  }
  return base*pow(base,n-1);
  
}
int main()
{
  int base=3;
  int num=3;
 cout<< pow(base,num);

return 0;
}