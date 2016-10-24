#include<algorithm>
#include<list>
#include<iterator>
#include<iostream>

int main(){
  std::list<int> il={1,2,3,4,0,5,0,1};
  auto result=std::find(il.crbegin(), il.crend(), 0);
  std::cout<< std::distance(result, il.crend())<<std::endl;
}

