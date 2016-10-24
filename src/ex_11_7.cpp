#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

using std::string;
using std::vector;
using std::map;
using std::cin;
using std::cout;
using Families = map<string, vector<string>>;

Families make_families()
{
  Families families;
  for(string ln;cout<<"Print the last name:\n",cin>>ln&&ln!="@q";){
    for(string cn;cout<<"Enter the child's name:\n",cin>>cn&&cn!="@q";){
      families[ln].push_back(cn);
    }
  }
  return families;
}

void addChild(Families& families,const string& f,string name){
  families[f].push_back(name);
}

void print(Families const& families)
{
  for (auto const& family : families)
    {
      cout << family.first << ":\n";
      for (auto const& child : family.second)
        cout << child << " ";
      cout << "\n";
    }
}

int main()
{
  Families families=make_families();
  print(families);
  addChild(families,"Nash","John");
  print(families);
  return 0;
}


