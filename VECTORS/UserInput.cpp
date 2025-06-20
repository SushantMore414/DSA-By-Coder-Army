#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin >> n;
  cout << "enter the values" << n << ":";
  vector<int> us(n);
  for (int i = 0; i < n; i++)
    cin >> us[i];
  cout << endl;

  us.pop_back();
  for (auto i : us)
    cout << i << " ";
}