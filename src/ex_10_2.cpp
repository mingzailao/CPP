#include<algorithm>
#include<string>
#include<list>
#include<iostream>
using std::list;
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main(){
  list<string> sl;
  string number;
  cin>>number;
  string i;
  while(cin>>i){
    sl.push_back(i);
  }
  cout<<std::count(sl.cbegin(), sl.cend(),number)<<endl;;
  return 0;
}

