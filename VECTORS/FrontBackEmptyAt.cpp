#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {2, 4, 6, 4};

    cout << "First element: " << a.front() << endl;
    cout << "Last element: " << a.back() << endl;
    cout << "Position element (index 2): " << a.at(2) << endl;
    cout << "Is vector empty?(not empty=0) (empty=1): " << (a.empty()) << endl;

    return 0;
}
