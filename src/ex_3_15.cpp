#include<iostream>
#include<string>
#include<vector>

int main(){
  std::vector<std::string> svec;
  std::string s;
  while(std::cin>>s){
    svec.push_back(s);
  }
  for(decltype(svec.size()) j=0;j<svec.size();j++){
    std::cout<<svec.at(j)<<" ";
  }
  std::cout<<std::endl;
  return 0;
}
