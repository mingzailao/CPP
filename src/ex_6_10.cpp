#include "utils.h"
#include<iostream>
int main()
{
  for (int lft, rht; std::cout << "Please Enter:\n", std::cin >> lft >> rht; )
    {
      swap(&lft, &rht);
      std::cout << lft << " " << rht << std::endl;
    }

  return 0;
}
