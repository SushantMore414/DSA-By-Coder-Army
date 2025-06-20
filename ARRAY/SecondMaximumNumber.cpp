#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

int main()
{
  int arr[] = {2, 6, 7, 5, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  int First = INT_MIN, Second = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > First)
    {
      Second = First;
      First = arr[i];
    }
    else if (arr[i] > Second && arr[i] < First)
    {
      Second = arr[i];
    }
  }

  cout << "Second largest element: " << Second << endl;

  return 0;
}
