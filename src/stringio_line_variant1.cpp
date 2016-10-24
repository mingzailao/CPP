#include<iostream>
#include<string>
int main(){
  std::string s;
  while(getline(std::cin,s)){
    if(!s.empty())
      std::cout<<s<<std::endl;
  }
  return 0;
}
