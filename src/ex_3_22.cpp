#include<iostream>
#include<vector>
#include<string>
int main(){
  std::vector<std::string> text;
  for(std::string line ;getline(std::cin,line);text.push_back(line));
  for(auto &ch : *(text.begin())){
    if(isalpha(ch))
      ch=toupper(ch);
  }
  for(auto const line :text){
    std::cout<<line<<std::endl;
  }
  return 0;
}
