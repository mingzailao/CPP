#include<vector>
#include<iostream>
#include "utils.h"
int main(){
  std::vector<int> ivec{1,1,2,3,5,8,13,21};
  std::cout<<contains(ivec.cbegin(),ivec.cend(),9)<<std::endl;
  std::cout<<contains(ivec.cbegin(),ivec.cend(),8)<<std::endl;
}
