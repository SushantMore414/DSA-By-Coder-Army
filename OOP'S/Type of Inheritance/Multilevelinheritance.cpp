#include <iostream>
#include <string>
using namespace std;

class manager
{
protected:
  string dept;

public:
  string name;
  int age;
  public:
  manager()
  {
    cout << "this is manager constructor" << endl;
  }
};

class leder : public manager
{
protected:
  string lover;

public:
  leder()
  {
    cout << "this is lider constructor" << endl;
  }
};

class employe : public leder
{
public:
  employe(string name, int age, string dept, string lover)
  {
    this->name = name;
    this->age = age;
    this->dept = dept;
    this->lover = lover;
  }
  void display3()
  {
    cout << name << " " << age << " " << dept << " " << lover << " " << endl;
  }
};

int main()
{
  employe e1("sushant", 21, "ece", "sanjana");
  e1.display3();

  return 0;
}
