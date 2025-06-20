#include <iostream>
#include <vector>
using namespace std;
int main()
{
  string s = "more3 is1 this2 ?5 sushant4";
  int count = 0, index = 0;
  string temp;

  vector<string> ans(10);

  while (index < s.size())//0 to end of sentance
  {
    if (s[index] == ' ')
    {
      int pos = temp[temp.size() - 1] - '0'; //this is conver string to number
      temp.pop_back();
      ans[pos] = temp;
      temp.clear();
      count++;
    }
    else
    {
      temp = temp + s[index];
    }
    index++;
  }

  int pos = temp[temp.size() - 1] - '0';
  temp.pop_back();
  ans[pos] = temp;
  temp.clear();
  count++;

  string result;
  for (int i = 1; i < 10; i++)
  {
    
      result += ans[i] + " ";
    
  }
  
    result.pop_back();
  cout << result << endl;

  return 0;
}