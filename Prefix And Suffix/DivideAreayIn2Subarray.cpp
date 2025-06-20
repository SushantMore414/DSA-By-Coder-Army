#include <iostream>
#include <vector>
using namespace std;

bool divide(const vector<int>&arr)
{
  int arraysum = 0, prefix = 0;
  int n = arr.size();

  for (int i = 0; i < n; i++)
  {
    arraysum += arr[i];
  }

  for (int j = 0; j < n - 1; j++)
  {
    prefix += arr[j];
    int suffix = arraysum - prefix;
    if (prefix == suffix)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int n;
  cout << "Enter the size of array: ";
  cin >> n;

  vector<int> v(n);
  cout << "Enter the array elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  cout<<(divide(v));
   

 
}
