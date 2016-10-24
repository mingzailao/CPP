#include "utils.h"
#include<iostream>

int main()
{
  for (int left, right; std::cout << "Please Enter:\n", std::cin >> left >> right; )
    {
      swap(left, right);
      std::cout << left << " " << right << std::endl;
    }

  return 0;
}
