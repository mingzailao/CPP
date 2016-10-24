#include <iostream>
#include <string>
#include "Sales_data.h"
using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
  Sales_data total;
  if (read(std::cin,total))
    {
      Sales_data trans;
      while (read(std::cin,trans)) 
        {
          if (total.isbn() == trans.isbn()) 
            {
              total.combine(trans);
            }
          else
            {
              print(std::cout,total);
              total = trans;
            }
        }
      print(std::cout,total);
    }
  else
    {
      std::cerr << "No data?!" << std::endl;
      return -1;
    }
  return 0;
}
