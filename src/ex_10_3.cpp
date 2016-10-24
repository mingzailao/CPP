#include<algorithm>
#include<vector>
#include<iostream>
#include <numeric>
using std::cin;
using std::endl;
using std::cout;
using std::vector;
int main(){
  vector<int> ivec={1,2,3,4,5};
  cout<<std::accumulate(ivec.cbegin(), ivec.cend(), 0);
}
