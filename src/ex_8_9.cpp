#include "utils.h"
#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using std::istream;
using std::ifstream;
int main(int argc,char *argv[])
{
  std::istringstream iss("hello");
  myPrintf(iss);
  return 0;
}

