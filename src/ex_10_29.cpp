#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>
#include "utils.h"
using std::string;
int main(){
  std::ifstream ifs("/Users/apple/PAPERS/Code/MyC++/data/book");
  std::istream_iterator<string> in(ifs),eof;
  std::vector<string> vec;
  println(vec);
  std::copy(in, eof, std::ostream_iterator<string>(std::cout,"\n"));
}


