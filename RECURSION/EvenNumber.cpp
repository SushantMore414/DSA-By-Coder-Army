#include<iostream>
using namespace std;

void even(int x){
  
  if (x>=2)
  {
    
    even(x-2);
    cout<<x<<" ";
    
  }else{
    return;
  }
}
int main()
{
  int n=100;

  even(n);
  
return 0;
}