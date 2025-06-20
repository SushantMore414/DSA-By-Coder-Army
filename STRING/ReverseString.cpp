#include<iostream>
using namespace std;
int main()
{
string s="sushant";
cout<<s<<endl;
 int n=s.size();
 int start=0,end=n-1;
while (start<end)
{
  swap(s[start], s[end]);
  start++, end--;

}
cout<<s<<endl;




 
return 0;
}