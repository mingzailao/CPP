#include "StrBlob.hpp"
#include<iostream>

int main()
{
  const StrBlob csb{ "hello", "world", "pezy" };
  StrBlob sb{ "hello", "world", "Mooophy" };

  std::cout << csb.front() << " " << csb.back() << std::endl;//use const member function
  sb.back() = "pezy";
  std::cout << sb.front() << " " << sb.back() << std::endl;
}
