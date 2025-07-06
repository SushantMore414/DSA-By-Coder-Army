#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    int age;

    // Parameterized constructor
    student(string n) {
        name = n;
    }

    // Correct copy constructor
    student(student &copy) {
        name = copy.name;
    }
};

int main() {
    student s1("sushant");
    student s2(s1);  // Calls copy constructor
    cout << s2.name<<endl;
    return 0;
}
