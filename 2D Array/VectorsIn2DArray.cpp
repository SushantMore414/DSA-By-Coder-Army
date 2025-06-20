#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  //basic syntaxes
  // vector<vector<int> > matrix;
  // vector<vector<int> > matrix(row, vector<int>(col, Initialize))
  
  vector<vector<int> > matrix(3, vector<int>(3, 4));

  for (int j= 0; j <3 ; j++)
  {
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
      cout<<matrix[i][j]<<" ";
    }
    
  }

  cout<<"\nupdated the matrix";
  matrix[1][2]=5;
  matrix[2][1]=2;

  for (int j= 0; j <3 ; j++)
  {
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
      cout<<matrix[i][j]<<" ";
    }
    
  }
return 0;
}