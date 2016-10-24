#ifndef PERSON_H_
#define PERSON_H_

#include<iostream>
#include<string>
using std::string;


class Person{
  friend std::istream &read(std::istream &is,Person &person);
  friend std::ostream *print(std::ostream &os,const Person &person);
private:
  std::string name;
  std::string address;
public:
  Person() = default;
  Person(const std::string sname, const std::string saddr):name(sname), address(saddr){ }
  explicit Person(std::istream &is){ read(is, *this); }
  const string& get_name(){return this.name;}
  const string& get_address(){return this.address;}
};

std::istream& read(std::istream &is,Person &person){
  is>>person.name>>person.address;
  return is;
}

std::ostream& print(std::ostream &os,const Person &person){
  os<<person.get_name()<<" "<<person.get_address()<<std::endl;
  return os;
}

#endif
