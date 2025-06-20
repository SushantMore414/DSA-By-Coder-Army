#include<iostream>
#include<vector>
using namespace std;
int main()
{
string sentance="the quick brown fox jumps over the lazy dog";


vector<int> alpha(26,0);

for (int i = 0; i < sentance.size(); i++)
{
  alpha[sentance[i]-'a']=1;
}

for (int i = 0; i < 26; i++)
{
  if (alpha[i]==0)
  {
   
  cout<<" 0";
  }
  else 
  cout<<" 1";
}


return 0;
}