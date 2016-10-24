#include<iostream>
#include<vector>
#include<list>
using std::vector;
using std::list;
using std::begin;
using std::end;
int main(){
  int ia[]={0,1,1,2,3,5,8,13,21,55,89};
  vector<int> ivec(begin(ia),end(ia));
  list<int> il(ivec.begin(),ivec.end());
  for(auto it1=il.cbegin();it1!=il.cend();){
    if(*it1&0x1) it1=il.erase(it1);
    else{
      ++it1;
    }
  }
  for(const auto i:il){
    std::cout<<i<<std::endl;
  }
  for(auto it=ivec.cbegin();it!=ivec.end();){
    if(!*it&0x1) it=ivec.erase(it);
    else{
      ++it;
    }
  }
  for(const auto i:ivec){
    std::cout<<i<<std::endl;
  }
}
