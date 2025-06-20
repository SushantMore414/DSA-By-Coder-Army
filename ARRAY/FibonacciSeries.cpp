#include <iostream>
using namespace std;

int main() {
    int arr[1000];  
    int n = 13;      
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; i++) {  //  loop condition
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    // Printing the Fibonacci sequence
    cout << "Fibonacci sequence up to " << n << " terms: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
