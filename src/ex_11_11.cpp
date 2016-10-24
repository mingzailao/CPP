#include "Sales_data.h"
#include <set>
#include<iostream>
bool less(Sales_data const& lhs, Sales_data const& rhs)
{
  return lhs.isbn() < rhs.isbn();
}

int main()
{
  using Less = bool (*)(Sales_data const&, Sales_data const&);
  std::multiset<Sales_data, Less> bookstore(less);
  return 0;
}
