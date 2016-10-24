#include "Sales_data.h"
#include "utils.h"
bool CompareIsbn(const Sales_data &a,const Sales_data &b){
  return is_shorter(a.isbn(),b.isbn());
}
int main()
{
  Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
  std::vector<Sales_data> v{ d1, d2, d3, d4, d5 };

  // @note   the elements the iterators pointing to
  //         must match the parameters of the predicate.
  std::sort(v.begin(), v.end(), CompareIsbn);

  for(const auto &element : v)
    std::cout << element.isbn() << " ";
  std::cout << std::endl;

  return 0;
}
