#include<algorithm>
#include<vector>
#include<iostream>
#include <numeric>
using std::cin;
using std::endl;
using std::cout;
using std::vector;
int main(){
  vector<double> ivec={1,2.4,3,4,5};
  cout<<std::accumulate(ivec.cbegin(), ivec.cend(),0.0)<<endl;
}
