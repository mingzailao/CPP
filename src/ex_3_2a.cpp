#include<string>
#include<iostream>
int main(){
  std::string s;
  // while(getline(std::cin,s)){
  //   std::cout<<s<<std::endl;
  // }
  // return 0;
  while(std::cin>>s){
    std::cout<<s<<std::endl;
  }
  return 0;
}
