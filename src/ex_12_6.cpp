#include <iostream>
#include <vector>
#include<algorithm>
#include<iterator>
using Ptr = std::vector<int>*;


Ptr make_dynamically(){
  return new std::vector<int>{};
}
Ptr populate(Ptr vec){
  std::istream_iterator<int> in(std::cin),in_eof;
  std::copy(in, in_eof, std::inserter(*vec, vec->begin()));
  return vec;
}
void print(Ptr vec){
  std::ostream_iterator<int> out(std::cout," ");
  std::copy(vec->cbegin(),vec->cend(),out);
  std::cout<<std::endl;
}
int main()
{
  auto vec = populate(make_dynamically());
  print(vec);
  delete vec;
  return 0;
}
