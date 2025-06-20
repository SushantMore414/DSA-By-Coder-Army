#include<iostream>
using namespace std;
int main()
{
string s="naamaan";
int start=0, end=s.size()-1;
while (start<end)
{
  if (s[start]!=s[end])
  {
    cout<<"it is  not palindrom";
    return 0;
  }else{
    start++,end--;
  }
  
  
}
cout<<"palindrom";
}