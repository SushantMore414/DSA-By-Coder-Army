#include <iostream>
#include <string>
using namespace std;

class student
{
public:
  string name;
  int *age;

  // constructor
  student(string name)
  {
    this->name = name;
    cout << "constructor is:" << name << endl;
  }
  // destructor
  ~student()
  {
    cout << "destructor is: " << name << endl;
  }
};

int main()
{
  student s1("sushant"), s2("sagar"), s3("vishal");
}
