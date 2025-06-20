#include <iostream>
using namespace std;
int main()
{
  int arr[3][3] = {1, 6, 7, 2, 5, 4, 3, 4, 9};

  int row = 3, col = 3;

  for (int j = 0; j < col; j++)
  {
    cout << endl;
    if (j % 2 == 0)
    {
      for (int i = 0; i < row; i++)
      {
        cout << arr[i][j] << " ";
      }
    }
    else
      for (int i = row-1; i >= 0; i--)
      {
        cout << arr[i][j] << " ";
      }
  }

  return 0;
}