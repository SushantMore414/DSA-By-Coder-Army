#include <iostream>
#include <string>
using namespace std;

class student
{
protected:
  int rol;

public:
  string name;
  int age;

public:
  student()
  {
    cout << "this is student constructor" << endl;
  }
};

class male
{

public:
public:
  male()
  {
    cout << "this is student constructor" << endl;
  }
};

class female
{

public:
public:
  female()
  {
    cout << "this is student constructor" << endl;
  }
};

class boy : public student, public male
{

public:
  boy(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
};

class girl : public student, public female
{

public:
 girl(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
};

int main()
{
  boy b1("sushant", 21);
  girl g("sanjana", 20);

  return 0;
}

