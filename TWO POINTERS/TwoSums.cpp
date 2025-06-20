#include <iostream>
#include <vector>
using namespace std;
int TwoPointer(const vector<int> &a, int target)
{
 cout<<"In TwoPointer function"<<endl;
  int start = 0, end = a.size() - 1;
  while (start < end)
  {
    if (a[start] + a[end] == target)
    {
      cout << a[start] << "+" << a[end] << "=" << target << endl;
      // to find All Pairs
      start++; // move forward to look for more
      end--;   // you can choose to keep or remove this depending on use case
    }
    else if (a[start] + a[end] < target)
    {
      start++;
    }
    else
    {
      end--;
    }
  }
  return 0;
}
int UsingBinary(const vector<int> &a, int target){
  
/*if u dont wtite const its ok. and no need & */
  cout<<"In UsingBinary function"<<endl;
  int start = 0, end = a.size() - 1;
  while (start < end)
  {
    if (a[start] + a[end] == target)
    {
      cout << a[start] << "+" << a[end] << "=" << target << endl;
      return 0;
    }
    else if (a[start] + a[end] < target)
    {
      start++;
    }
    else
    {
      end--;
    }
  }
  return 0;
}
int main()
{
  vector<int> a = {3, 5, 7, 9, 11, 15};
  int target = 20;
  
  TwoPointer(a, target);
  UsingBinary(a, target);
  return 0;
}
