#include <iostream>
#include <string>
using namespace std;

class student
{
public:
  string name;
  int age;
  double usn;

  student(){
    cout << "this is the non-parameterized constructor" << endl;
  }

  student(string n, int a, double u){
    name = n;
    age = a;
    usn = u;
  }

  
};


int main()
{
  student s1("sushant", 21, 414);
  cout << s1.name << " " << s1.age << " " << s1.usn << endl;
}
