#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 4, 5, 6};
    int n = arr.size();
    for (int st = 0; st < n; st++)
    {

        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << ","; 
        }
        cout << endl;
    }
}
