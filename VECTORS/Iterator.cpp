#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> p1 = {5, 3, 2, 1, 8};

    cout << "First element: " << *p1.begin() << endl;
    cout << "Last element: " << *(p1.end() - 1) << endl;

    for(auto it=p1.begin(); it!=p1.end();it++){
    cout<<*it<<" ";
    }
    cout<<endl;
    for(auto p:p1)
      cout<<p<<" ";
    return 0;
}
