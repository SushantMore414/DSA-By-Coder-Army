#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {2, 3, 5, 6};

    cout << "Given array:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    // Create suffix sum array
    vector<int> suffix(arr.size());
    suffix[arr.size() - 1] = arr[arr.size() - 1];  // Last element remains the same

    // Fill suffix array from right to left
    for (int i = arr.size() - 1; i >=0; i--) {
        suffix[i] = arr[i] + suffix[i + 1];
    }

    cout << endl << "Applying suffix sum:" << endl;
    for (int i = 0; i < suffix.size(); i++) {
        cout << suffix[i] << " ";
    }

    return 0;
}
