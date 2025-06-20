#include <iostream>
using namespace std;
int main()
{
  int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int arr2[3][3] = {2, 4 ,4 ,5 ,7, 2, 5, 1, 6};
  int ans[3] [3];

  int row = 3, col = 3;

  
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++){
      //martix additioo
      ans[i][j]=arr1[i][j]+arr2[i][j];
    }
  }
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++){
      cout<<ans[i][j]<<" ";

    }
  }

  return 0;
}