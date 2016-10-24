#include<iostream>
#include<string>

int main(){
  std::string output;
  for(std::string item;std::cin>>item;output+=item);
  std::cout<<output<<std::endl;
  return 0;
}
