#include "Technician.h"

Technician::Technician():Employee(){
  cout<<"Input name of employee : "<<endl;
  cin>>this->name;
  this->id = this->levNumber++;
  this->level = 1;
}
void Technician::upGrade(int level){
  this->level += level;
  cout<<"The employee "<<this->name<<" upgraded to "<<this->level<<endl;
}
void Technician::Pay(){
  cout << "Input the hours the employee worked : "<<endl;
  cin >> this->hours;
  this -> salary = this->hours * 100;
  cout<<"The employee earned "<<this->salary<<" $ "<<endl;
}
Technician::~Technician()
{
  cout<<"~Technician()"<<endl;
}
