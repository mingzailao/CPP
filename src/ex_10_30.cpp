#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main(){
  vector<int> ivec;
  std::istream_iterator<int> in(cin),eof;
  std::copy(in, eof, std::inserter(ivec, ivec.begin()));
  std::sort(ivec.begin(), ivec.end(), [](const int& lhs,const int& rhs){
      return lhs<rhs;
    });
  std::copy(ivec.cbegin(), ivec.cend(), std::ostream_iterator<int>(cout," "));
  cout<<endl;
}




