#include<vector>
#include<iostream>
#include<iterator>
#include<algorithm>
#include<list>
#include "utils.h"
using std::endl;
using std::cout;
using std::vector;
using std::list;
int main(){
  vector<int> ivec1={1,2,3,4,5,6,7,8,9};
  vector<int> ivec2,ivec3;
  list<int> il;
  // inserter
  std::copy(ivec1.cbegin(), ivec1.cend(), std::inserter(ivec2,ivec2.begin()));
  std::copy(ivec1.cbegin(), ivec1.cend(), std::back_inserter(ivec3));
  std::copy(ivec1.cbegin(), ivec1.cend(), std::front_inserter(il));
  println(ivec1);
  println(ivec2);
  println(ivec3);
  println(il);
}
