#include <iostream>
#include <string>
#include<fstream>
#include "Sales_data.h"
using std::cin; using std::cout; using std::endl; using std::string;

int main(int argc,char* argv[])
{
  std::ifstream ifs(argv[1]);
  std::ofstream ofs(argv[2],std::ofstream::app);
  Sales_data total;
  if (read(ifs,total))
    {
      Sales_data trans;
      while (read(ifs,trans)) 
        {
          if (total.isbn() == trans.isbn()) 
            {
              total.combine(trans);
            }
          else
            {
              print(ofs,total);
              total = trans;
            }
        }
      print(ofs,total);
    }
  else
    {
      std::cerr << "No data?!" << std::endl;
      return -1;
    }
  return 0;
}
