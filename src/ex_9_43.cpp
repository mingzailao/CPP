
#include <iterator>
#include <iostream>
#include <string>
#include <cstddef>
#include "utils.h"
using std::cout; 
using std::endl; 
using std::string;

int main()
{
  string s{ "To drive straight thru is a foolish, tho courageous act." };
  replace_with(s, "tho", "though");
  replace_with(s, "thru", "through");
  cout << s << endl;

  return 0;
}
