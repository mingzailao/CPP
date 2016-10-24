#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "utils.h"

using std::vector;
using std::string;

void elimDups(vector<string> &words){
  std::sort(words.begin(), words.end());
  println(words);

  auto new_end=std::unique(words.begin(), words.end());
  println(words);

  words.erase(new_end,words.end());
  println(words);
}

int main()
{
  std::vector<std::string> vs{ "a", "v", "a", "s", "v", "a", "a" };
  println(vs);
  elimDups(vs);
  //println(vs);

  return 0;
}
