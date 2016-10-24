#include<iostream>
#include<string>
#include<vector>

int main(){
  std::vector<int> ivec(10);
  for(auto &i:ivec){
    std::cin>>i;
  }
  for(auto &i:ivec){
    i*=2;
  }
  for(auto const i:ivec){
    std::cout<<i<<" ";
  }
  std::cout<<std::endl;
}

