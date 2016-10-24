#include<vector>
#include<iostream>
using std::vector;
using std::endl;
using std::cout;
using std::cin;
int main(){
  vector<int> ivec={0,1,2,3,4,5};
  // at

  cout<<ivec.at(0)<<endl;
  // index
  cout<<ivec[0]<<endl;
  // front
  cout<<ivec.front()<<endl;
  // begin
  cout<<*(ivec.cbegin())<<endl;
}
