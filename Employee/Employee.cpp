#include "Employee.h"
int Employee::levNumber = 1000;
Employee::Employee()
{
  cout<<"A employee has been created!"<<endl;
}
void Employee::getStatus()
{
  cout<<"The employee named "<<this->name<<endl;
  cout<<"ID: "<<this->id<<endl;
  cout<<"Level: "<<this->level<<endl;
  cout<<"Got "<<this->salary<<" $ "<<endl;
}
Employee::~Employee(){}
