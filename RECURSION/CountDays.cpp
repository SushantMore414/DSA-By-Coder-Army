#include<iostream>
using namespace std;

void fun(int x){
  if (x==0){
    cout<<"HAPPY BIRTHADAY DEAR!"<<endl;
    return;
  }else{
    cout<<x<<" Day's To Go"<<endl;
  }
  fun(x-1);
  
  
}
int main()
{
  int n=3;
  fun(n);

return 0;
}