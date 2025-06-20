#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // Adding values in elements
  vector<int> v;
  v.push_back(2);
  v.push_back(4);
  v.push_back(1);
  v.push_back(8);
  cout << "Current values in the vector: ";
  for (auto i : v)
  {
    cout << i << " ";
  }
  cout << endl;
  // removing last element
  cout<<"removing values from last element:";
  v.pop_back();

  for (auto i : v)
  {
    cout << i << " ";
  }
  cout << endl;
  //removing midel any values in arry
  cout<<"removing index(1)  values in arry:";
  v.erase(v.begin()+1);
  for (auto i : v)
  {
    cout << i << " ";
  }
  cout << endl;
  //removing all values in arry
  cout<<"removing all values in arry"<<endl;
  v.clear();
  for (auto i : v)
  {
    cout << i << " ";
  }
}
