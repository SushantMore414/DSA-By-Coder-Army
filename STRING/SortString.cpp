#include<iostream>
#include<vector>
using namespace std;
int main()
{
string a="cdefgzpk";

vector<int> alpha(26,0);

int start=0, end=a.size();
string ans; 
for (int i = 0; i < a.size(); i++)
{
  alpha[a[i]-'a']++;
}
for (int i = 0; i <26; i++)
{
  char ch='a'+i;

  while (alpha[i])
  {
    // ans.push_back(ch); 
    ans+=ch;
    alpha[i]--;
  }
}
cout<<ans;

return 0;
}