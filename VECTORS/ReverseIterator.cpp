#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> p1 = {5, 3, 2, 1, 8};

    cout << "First element: " << *p1.rbegin() << endl;
    cout << "Last element: " << *(p1.rbegin() + (p1.size() - 1)) << endl;//*p1.rbegin() this also correct


    for(auto it=p1.rbegin(); it!=p1.rend();it++){
    cout<<*it<<" ";
    }
    cout<<endl;

    
}
