#include<vector>
#include<iostream>
#include<iterator>
#include<algorithm>
using std::vector;
using std::cout;
using std::cin;
int main(){
  vector<int> ivec;
  std::istream_iterator<int> in(cin),in_eof;
  std::copy(in, in_eof, std::inserter(ivec, ivec.begin()));
  for(auto it=std::prev(ivec.cend());true;--it){
    std::cout << *it << " ";
    if(it==ivec.cbegin()) break;
  };
  std::cout<<std::endl;
  return 0;
}
