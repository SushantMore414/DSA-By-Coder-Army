#include <iostream>
using namespace std;
int main()
{
  int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  int x = 9, row = 3, col = 3;
  //finding the x th element in array
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)

    {
      if (arr[i][j] == x)
      {
        cout << "yes i got it in " << arr[i][j]-1<<" index" <<endl;
        return 0;
      }
    }
  }
  cout << "Given number is not theit in matrix" << endl;

  return 0;
}