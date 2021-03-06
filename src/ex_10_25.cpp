#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::string;
using std::vector;
using namespace std::placeholders;
void elimdups(vector<string> &vs)
{
  std::sort(vs.begin(), vs.end());
  vs.erase(unique(vs.begin(), vs.end()), vs.end());
}

bool check_size(const string& s,string::size_type sz){
  return s.size()>=sz;
}

void biggies(vector<string>& vs,int sz){
  elimdups(vs);
  auto iter=std::stable_partition(vs.begin(), vs.end(), bind(check_size,_1,sz));
  for_each(vs.begin(),iter,[](const string& s){std::cout<<s<<" ";});
}
int main()
{
  std::vector<std::string> v{
    "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"
      };
  biggies(v, 4);
}
