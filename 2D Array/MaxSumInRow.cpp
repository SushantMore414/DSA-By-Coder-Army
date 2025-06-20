#include<iostream>
using namespace std;
int main()
{

  int arr1[3][3] = {10, 12, 3, 4, 15, 26, 27, 8, 9};

  int row = 3, col = 3;
  int sum =INT_MIN,  index;

  
  for (int i = 0; i < row; i++)
  {
    int total=0;
    for (int j = 0; j < col; j++){
      total=total+arr1[i][j];   
      if (sum<total)
      {
        sum=total;
        index=i;
      }
      
  }
  
}
cout<<index<<" "<<sum;
  
return 0;
}