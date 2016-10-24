#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using std::vector;
using std::string;

int bigerThan6(const vector<string>& vs){
  return std::count_if(vs.cbegin(), vs.cend(), [](const string& s){
      return s.size()>6;
    });
}

int main()
{
  // ex10.20
  vector<string> v{
    "alan","moophy","1234567","1234567","1234567","1234567"
      };
  std::cout << "ex10.20: " << bigerThan6(v) << std::endl;

  // ex10.21
  // int i = 7;
  // auto check_and_decrement = [&i](){ return --i ? false : true; };
  // std::cout << "ex10.21: ";
  // while(!check_and_decrement())
  //   std::cout << i << " ";
  // std::cout << i << std::endl;

  return 0;
}
