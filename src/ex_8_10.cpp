#include<sstream>
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include "utils.h"
int main(int argc,char* argv[]){
  std::string FilePath=argv[1];
  std::vector<std::string> svec;
  ReadFileToVec(FilePath,svec);
  for(auto const line:svec){
    std::cout<<line<<std::endl;
  }
  std::vector<std::string> svec2;
  for(auto const line : svec){
    std::istringstream ist(line);
    std::string s;
    while(ist>>s){
      svec2.push_back(s);
    }
  }
  for(auto const word: svec2){
    std::cout<<word<<std::endl;
  }
  return 0;
}
