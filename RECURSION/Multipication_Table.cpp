#include<iostream>
using namespace std;
void multiplication(int x, int y){
  if(x>=11){
    
    return;
  
  }
  else{
    cout<<y<<"x"<< x<< "="<<x*y<<endl;
  }
  multiplication(x+1,y);

}
int main()
{
  int x=1,y=2;
  // int x,y;
  // cout<<"Enter the length of the table:";
  // cin>>x;
  // cout<<"Enter the require table number:";
  // cin>>y;

  multiplication(x,y);


return 0;
}