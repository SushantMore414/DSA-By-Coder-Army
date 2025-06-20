#include <iostream>
using namespace std;
int main()
{
  cout << "press Enter \"key\":";
  for (int i = 5; i >0; i--)
  {

    cin.get();//for enter key or empty space
    cout << i << " Day's to go!" << endl;
  }
  cin.get();
  cout << "Happy Birtaday Dear" << endl;



  return 0;
}