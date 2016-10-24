#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include<utility>
using std::string;
using std::vector;
using std::map;
using std::cin;
using std::cout;
using std::pair;
using Families = map<string, vector<pair<string,string>>>;

Families make_families()
{
  Families families;
  for(string ln;cout<<"Print the last name:\n",cin>>ln&&ln!="@q";){
    for(string cn;cout<<"Enter the child's name:\n",cin>>cn&&cn!="@q";){
      string bd;
      cout<<"Enter the birthday:\n";
      cin>>bd;
      families[ln].push_back(pair<string,string>(cn,bd));
    }
  }
  return families;
}

void addChild(Families& families,const string& f,string name,string birthday){
  families[f].push_back(pair<string,string>(name,birthday));
}

void print(Families const& families)
{
  for (auto const& family : families)
    {
      cout << family.first << ":\n";
      for (auto const& child_birthday : family.second){
        cout <<child_birthday.first<<child_birthday.second<<"\n";
      }
      cout << "\n";
    }
}

int main()
{
  Families families=make_families();
  print(families);
  addChild(families,"Nash","John","1929-3-5");
  print(families);
  return 0;
}


