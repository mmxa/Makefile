#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class Employee{
public:
  Employee();
  void getStatus();
  virtual ~Employee();
  virtual void upGrade(int level) = 0;
  virtual void Pay() = 0;
  static int levNumber;
protected:
  string name;
  int id;
  int level;
  double salary;
};
#endif
