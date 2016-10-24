#include "utils.h"
#include<iostream>
using std::cout;
using std::endl;
int main()
{
  string name("Wang");
  cout << add_pre_and_suffix(name, "Mr.", ", Jr.") << endl;
  return 0;
}
