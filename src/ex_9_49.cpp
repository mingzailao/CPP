
#include <string>
#include <fstream>
#include <iostream>

using std::string; using std::cout; using std::endl; using std::ifstream;

int main(){
  ifstream ifs("/Users/apple/PAPERS/Code/MyC++/data/letter.txt");
  string longest;
  auto update_with=[&longest](string const& cur){
    if(string::npos==cur.find_first_not_of("aceimnorsuvwxz"))
      longest=longest.size()<cur.size()?cur:longest;
  };
  for(string cur;ifs>>cur;update_with(cur));
  cout<<longest<<endl;
}
