#include <iostream>
// #include <algorithm> // Include for swap function
using namespace std;

int main()
{
  int arr[] = {2, 6, 17,  1, 8, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  for (int i = n - 1; i > 0; i--)
  {
    bool swapped = false;

    for (int j = 0; j < i; j++) // Move largest elements to the right
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }

    // If no swaps occurred, the array is already sorted
    if (!swapped)
    {
      break;
    }
  }

  // Print sorted array
  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
