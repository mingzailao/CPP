#include <iostream>
#include <vector>
#include "utils.h"
using std::vector; using std::cout;

int main()
{
  vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  print(vec.cbegin(), vec.cend());
  return 0;
}
