#include<iostream>
#include<string>
#include<vector>

int main(){
  std::vector<std::string> svec;
  std::string s;
  while(std::cin>>s){
    svec.push_back(s);
  }
  for(auto &s:svec){
    for(auto &i:s){
      i=toupper(i);
    }
  }
  for(auto s:svec){
    std::cout<<s<<std::endl;
  }
  return 0;
}
