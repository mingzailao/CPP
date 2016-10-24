#include <iostream>
#include <string>
#include "utils.h"
using std::string;
using std::cout;
using std::endl;
int main()
{
  cout << "singual: " << make_plural(1, "success", "es") << " "
       << make_plural(1, "failure") << endl;
  cout << "plural : " << make_plural(2, "success", "es") << " "
       << make_plural(2, "failure") << endl;

  return 0;
}




