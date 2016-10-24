#include<iostream>
#include<string>
#include<vector>

int main(){
  std::vector<int> ivec(10);
  for(auto it=ivec.begin();it<ivec.end();++it){
    std::cin>>*it;
  }
  for(auto it=ivec.begin();it<ivec.end();++it){
    *it=2*(*it);
  }
  for(auto it=ivec.cbegin();it<ivec.cend();++it){
    std::cout<<*it<<" ";
  }
  std::cout<<std::endl;
  return 0;
}

