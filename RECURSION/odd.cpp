#include<iostream>
using namespace std;
void odd(int n){
  if (n==1)
  {
    cout<<n<<" ";
    return;
  }else{
    odd(n-2);
    cout<<n<<" ";
  }
  

}
int main()
{
  int n=14;
  
  if (n%2==0)
  {
    cout<<n%2<<endl;
    n--;
  }
  odd(n);

return 0;
}