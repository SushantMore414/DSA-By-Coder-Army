#include<iostream>
#include<string>
using namespace std;

class sushant{
  protected:
  string gf;
  public:
  string name;
  int age;
  sushant(){
    cout<<"this is sushant's constructor"<<endl;

  }


};
class vishal{
  protected:
  string gf1;

  public:
  int usn;

  vishal(){
    cout<<"this is vishal's constructor"<<endl;
  }
};

class parent:public sushant, protected vishal{
  public:
  parent(string name,string gf,int age,int usn){
    this->name=name;
    this->gf=gf;
    this->age=age;
    this->usn=usn;

  }
  void display(){
    cout<<name<<" "<<gf<<" "<<age<<" "<<usn<<endl;

  }
  
};
int main()
{
  parent p1("sushant","xxx",21,414);
  p1.display();
  parent p2("vishal","xxx",21,414);
  p2.display();

return 0;
}