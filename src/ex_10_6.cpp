#include<algorithm>
#include<vector>
#include<iostream>
#include "utils.h"
using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main(){
  vector<int> ivec{0,1,2,3,4,5};
  std::fill_n(ivec.begin(),ivec.size(), 0);
  ivecPrint(ivec);
  return 0;
}
