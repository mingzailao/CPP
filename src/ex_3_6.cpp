#include<iostream>
#include<string>
int main(){
  std::string s;
  while(getline(std::cin,s)){
    for(auto &i:s){
      i='X';
    }
    std::cout<<s<<std::endl;
  }
  return 0;
}

