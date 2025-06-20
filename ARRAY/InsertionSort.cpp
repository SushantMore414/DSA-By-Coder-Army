#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 6, 17, 2, 11, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n; i++)  // Start from the second element
    {
        int key = arr[i];  // Store the current element
        int j;  

        // Shift elements of the sorted part
        for (j = i - 1; j >= 0 && arr[j] > key; j--)
        {
            arr[j + 1] = arr[j];
        }
        
        arr[j + 1] = key;  // Insert the key at the correct position
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
