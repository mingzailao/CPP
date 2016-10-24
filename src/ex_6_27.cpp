#include <iostream>
#include <initializer_list>
#include "utils.h"
int main(void)
{
  auto il = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  std::cout << sum(il) << std::endl;
  return 0;
}
