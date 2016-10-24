#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::pair;

int main()
{
  pair<string,int> Max_duplicated;
  int count=0;
  for(string cur,pre;cin>>cur;pre=cur){
    if(cur==pre) ++count;
    else count=0;
    if(count>Max_duplicated.second) Max_duplicated={pre,count};
  }
  if(Max_duplicated.first.empty()) cout<<"There is no duplicated string"<<endl;
  else{
    cout<<"The word "<<Max_duplicated.first<<" occurred "<<Max_duplicated.second+1<<" times."<<endl;
  }
  return 0;
}
