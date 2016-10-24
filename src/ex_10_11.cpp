#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>
#include "utils.h"

void elimDups(std::vector<std::string> &vs)
{
  // std::sort(vs.begin(), vs.end());
  auto new_end = std::unique(vs.begin(), vs.end());
  vs.erase(new_end, vs.end());
}

int main()
{
  std::vector<std::string> v{
    "1234", "1234", "1234", "Hi", "alan", "wang"
      };
  elimDups(v);
  std::stable_sort(v.begin(), v.end(), is_shorter);
  std::cout << "ex10.11 :\n";
  println(v);

  return 0;
}
