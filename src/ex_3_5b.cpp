#include<iostream>
#include<string>

int main(){
  std::string result;
  for(std::string item;std::cin>>item;result+=item+" ");
  result=result.substr(0, result.size()-1);
  std::cout<<result<<std::endl;
  return 0;
}
