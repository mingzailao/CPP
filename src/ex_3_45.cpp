#include <iostream>
using std::cout; using std::endl;

int main()
{
  int arr[3][4] = 
    { 
      { 0, 1, 2, 3 },
      { 4, 5, 6, 7 },
      { 8, 9, 10, 11 }
    };

  // range for
  for (auto &p : arr)
    for (int col : p) cout << col << " ";
  cout << endl;

  // for loop
  for (size_t i = 0; i != 3; ++i)
    for (size_t j = 0; j != 4; ++j) cout << arr[i][j] << " ";
  cout << endl;

  // using pointers.
  for (auto *p = arr; p != arr + 3; ++p)
    for (int *q= *p; q != *p + 4; ++p) cout << *q << " ";
  cout << endl;

  return 0;
}
