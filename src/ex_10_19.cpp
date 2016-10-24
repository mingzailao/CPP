#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void elimdups(std::vector<std::string> &vs)
{
  std::sort(vs.begin(), vs.end());
  auto new_end = std::unique(vs.begin(), vs.end());
  vs.erase(new_end, vs.end());
}


void stable_biggies_partition(std::vector<std::string> &vs, std::size_t sz)
{
  using std::string;
  elimdups(vs);
  auto pivot=std::stable_partition(vs.begin(), vs.end(), [sz](string const& s){
      return s.size()<sz;
    });
  for(auto it = vs.cbegin(); it != pivot; ++it)
    std::cout << *it << " ";
}


int main()
{
  // ex10.19
  std::vector<std::string> v{
    "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"
      };
  std::cout << "ex10.18: ";
  std::vector<std::string> v1(v);
  stable_biggies_partition(v1, 4);
  std::cout << std::endl;
  return 0;
}

