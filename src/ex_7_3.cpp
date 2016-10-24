#include <iostream>
#include <string>
#include "Sales_data.h"
using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
  Sales_data total;
  if (cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
      Sales_data trans;
      while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) 
        {
          if (total.isbn() == trans.isbn()) 
            {
              total.combine(trans);
            }
          else
            {
              cout << total.isbn() << " " << total.units_sold << " " << total.revenue << endl;
              total = trans;
            }
        }
      cout << total.isbn() << " " << total.units_sold << " " << total.revenue << endl;
    }
  else
    {
      std::cerr << "No data?!" << std::endl;
      return -1;
    }
  return 0;
}
