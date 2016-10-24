#include "utils.h"
#include <iostream>
#include <string>
using std::cout; using std::endl; using std::string;
int main()
{
  string hello("Hello World!");
  cout << any_capital(hello) << endl;

  to_lowercase(hello);
  cout << hello << endl;

  return 0;
}
