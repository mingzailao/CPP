#include<vector>
#include<iostream>
#include "utils.h"
int main(){
  std::vector<int> ivec{1,1,2,3,5,8,13,21};
  std::vector<int>::const_iterator result1=find(ivec.cbegin(),ivec.cend(),9);
  std::vector<int>::const_iterator result2=find(ivec.cbegin(),ivec.cend(),8);
  std::cout<<result1-ivec.cbegin()<<std::endl;
  std::cout<<result2-ivec.cbegin()<<std::endl;
  return 0;
}
