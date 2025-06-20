#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a = {2, 6, 3};
    
    cout << "Size: " << a.size() << endl;  // Will print 3
    cout << "Capacity: " << a.capacity() << endl;  // Will print 3

    // Adding elements to the vector
    a.push_back(8);
    a.push_back(10);
    
    cout << "Size after adding elements: " << a.size() << endl;  // Will print 5
    cout << "Capacity after adding elements: " << a.capacity() << endl;  // Likely to be > 3 now
}
