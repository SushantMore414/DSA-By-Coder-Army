#include <iostream>
#include <string>
using namespace std;

class student
{
public:
  string name;
  int age;
  int  usn;

  student(){
    cout << "this is the non-parameterized constructor" << endl;
  }
//inline constructor
  inline student(string n, int a, int u):  name(n),age(a),usn(u) {
    name = n;
    age = a;
    usn = u;
  }

  
};


int main()
{
  student s1("sushant", 21, 414);
  student s2("sagar", 32, 420);
  cout << s1.name << " " << s1.age << " " << s1.usn << endl;
  cout << s2.name << " " << s2.age << " " << s2.usn << endl;
}
