#ifndef HERO_CPP
#define HERO_CPP
#include<iostream>
#include<string>
#include"Hero.h"

Hero::Hero(){
  cout<<"Hero has been created!"<<endl;
}
Hero::Hero(string n):name(n){
  cout<<"hero  "<<name<<"has been created."<<endl;
}

istream &operator>>(istream& is, Hero& p)
{ 
  is>>p.name;
  return is; 
}

 
#endif

