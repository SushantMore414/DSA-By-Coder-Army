#include<iostream>
using namespace std;

void ma(int x){
  if (x!=0)
  {
    cout<<x<<endl;
   
  }else{
     return;
  }
  ma(x-1);
  
}
int main()
{
  int n;
  cout<<"enter the number:";
  cin>>n;
  ma(n);

return 0;
}