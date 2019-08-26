#include <iostream>
#include <string>
#include "Employee.h"
#include "Technician.h"
using namespace std;

int main()
{
  Employee* e1 = new Technician;
  e1->Pay();
  e1->upGrade(2);
  e1->getStatus();
  return 0;
}
