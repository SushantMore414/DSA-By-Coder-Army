#include <iostream>
#include <string>
using namespace std;

class Human
{
  protected: //never use her Private if you used the it not caled in child class
  string religion;
public:
  string name;
  int age;

  Human()
  {
    cout<<"this is constructor"<<endl;
  }

  
};

class student :public Human
{
  protected:
  long long MobNo;

  public: // this becomes now protected

  student(string name, string religion,long long MobNo)
  {
    this->name=name;
    this->religion=religion;
    this->MobNo=MobNo;
  }


  void display(){
    cout<<name<<" "<<religion<<" "<<MobNo<<endl;
  }

  //destructor
  ~student(){
    cout<<"delited";
  }

};


int main()
{
  student s1("sushant", "Hindu", 8660360612);
  s1.display();
  return 0;
}
