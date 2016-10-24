#include<iostream>
#include<string>
int main(){
  std::string word;
  while(getline(std::cin,word))
    std::cout<<word<<std::endl;
  return 0;
}
