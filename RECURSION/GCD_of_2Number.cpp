#include<iostream>
using namespace std;
int gcd(int a, int b){

  if (b==0)
  {
    return a;
  }
  
  return gcd(b, a%b);

}
int main()
{

  int a=108, b=147;
  cout<<gcd(a,b);
return 0;
}