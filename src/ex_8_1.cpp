#include "utils.h"
#include<iostream>
#include<string>
#include<fstream>
using std::istream;
using std::ifstream;
int main(int argc,char *argv[])
{
  std::string FilePath=argv[1];
  ifstream ifs(FilePath);
  myPrintf(ifs);
  return 0;
}

