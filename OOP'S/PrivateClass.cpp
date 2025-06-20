#include <iostream>
#include <string>
using namespace std;
class student
{

private:
  int age;
  string name;
  double usn;

 
public:
 // creating function for accessing private value using getter and setter
  void setdetails(string name1, double usn1, int age1)
  {

    name = name1;
    usn = usn1;
    age = age1;
    return;
  }

  void getDetails()
  {
    cout << name << endl
         << usn << endl
         << age << endl;
  }
};

int main()
{
  student s1;

  s1.setdetails("sushant", 414, 21);
  s1.getDetails();

  student s2;
  s2.setdetails("sager", 413, 11);
  s2.getDetails();
  return 0;
}