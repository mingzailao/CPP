#include<string>
#include<iostream>
int main(){
  std::string s;
  while(getline(std::cin,s)){
    if(s.size()>80)
      std::cout<<s<<std::endl;
  }
  return 0;
}
