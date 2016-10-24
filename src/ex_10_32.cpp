#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include "Sales_item.h"
#include "utils.h"
#include <fstream>

int main()
{
  // std::istream_iterator<Sales_item> in_iter(std::cin), in_eof;
  // std::vector<Sales_item> vec;
  std::ifstream ifs("/Users/apple/PAPERS/Code/MyC++/data/test");
  std::istream_iterator<Sales_item> in_iter(ifs),in_eof;
  std::vector<Sales_item> vec;
  while (in_iter != in_eof){
    vec.push_back(*in_iter++);
  }
  std::cout<<"Done read~";
  std::cout<<vec.size()<<std::endl;
  std::cout<<vec.end()-vec.begin()<<std::endl;
  std::sort(vec.begin(), vec.end(), compareIsbn);
  std::cout<<"Done sorting"<<std::endl;
  for (auto beg = vec.cbegin(), end = beg; beg != vec.cend(); beg = end) {
    end = std::find_if(beg, vec.cend(), [beg](const Sales_item &item){ return item.isbn() != beg->isbn(); });
    Sales_item tmp(beg->isbn());
    std::cout << std::accumulate(beg, end, tmp) << std::endl;
  }
  return 0;
}
