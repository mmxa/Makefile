#ifndef TECHNICIAN_H
#define TECHNICIAN_H
#include"Employee.h"
#include <iostream>
#include <string>
using namespace std;
class Technician: public Employee{
public:
  Technician();
  virtual ~Technician();
  virtual void upGrade(int level);
  virtual void Pay();
private:
  double hours;
};
#endif
