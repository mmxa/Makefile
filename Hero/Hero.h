#ifndef HERO_H
#define HERO_H
#include<iostream>
#include<string>
using namespace std;

class Hero{
public:
  Hero();
  Hero(string n);
  friend istream &operator>>(istream &is,Hero &p);
private:
  string name;
};

class Hero_adv:public Hero{
public: 
     Hero_adv():Hero(){
     cout<<"super hero has been created!!!"<<endl;
}
};
 
#endif
