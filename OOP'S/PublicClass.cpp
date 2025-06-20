#include <iostream>
#include <string>
using namespace std;
class student
{

public:
  int age;
  string name;
  double usn;
  string sub;
};

int main()
{
  student s1;
  s1.name = "sushant";
  s1.usn = 414;
  s1.age = 21;
  s1.sub = "kannada";

  cout << s1.usn<<endl<<s1.name;
}