#include<iostream>
#include<string>
int main(){
  std::string s;
  while(getline(std::cin,s)){
    decltype(s.size()) i=0;
    while(i<s.size()){
      s[i]='X';
      i++;
    }
    std::cout<<s<<std::endl;
    for(i=0;i<s.size();i++){
      s[i]='Y';
    }
    std::cout<<s<<std::endl;
  }
  return 0;
}

