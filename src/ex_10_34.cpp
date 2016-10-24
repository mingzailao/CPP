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
  std::ostream_iterator<int> out(cout," ");
  std::copy(ivec.crbegin(), ivec.crend(),out );
  return 0;
}
