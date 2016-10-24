#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<iterator>
#include "utils.h"
int main(){
  std::vector<int> ivec={9,8,7,6,5,4,3,2,1,0};
  std::list<int> il;
  std::copy(ivec.crbegin()+3, ivec.crbegin()+8,std::back_inserter(il));
  println(il);
}
