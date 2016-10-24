#include "utils.h"

int main(){
  vector<string> vec;
  ReadFileToVec("/Users/apple/PAPERS/test", vec);
  for (const auto &str : vec)
    std::cout << str << std::endl;
  return 0;
}
