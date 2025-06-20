#include<iostream>
#include<string>
using namespace std;

class human
{
  protected:
  string name;
  int age;

  public:

  //this is the default constructor
  human(){

  };

     
  
};
 class student: public human{
  protected:
  int rolno;

  public:
   student(string name, int age){
    this->name=name;
    this->age=age;
  }

  void display()
{
  cout<<name<<" "<<age<<endl;
}

 };

class boy:public human{
  public:

  boy(string name, int age){
    this->name=name;
    this->age=age;
  }

  void display()
{
  cout<<name<<" "<<age<<endl;
}
};

int main()
{
  boy b1("sushant",21);
  b1.display();
  student s1("vishal",21);
  s1.display();

return 0;
}