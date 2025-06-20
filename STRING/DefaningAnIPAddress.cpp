#include<iostream>
using namespace std;
int main()
{
string address="1.1.1.1.1";
int index=0, end=address.size();
cout<<end;
string ans;
while (index<end){
  if (address[index]=='.')
  {
    ans=ans+"[.]";
  }
  else{
    ans=ans+address[index];
    index++;
  }
}
cout<<ans;
return 0;
}