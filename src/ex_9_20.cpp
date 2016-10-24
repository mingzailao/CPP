#include<list>
#include<deque>
#include<iostream>
using std::list;
using std::deque;
int main(){
  list<int> l={1,2,3,4,5,6,7,8};
  deque<int> d1,d2;
  for(auto item:l){
    ((item%2==0)?d1:d2).push_back(item);
  }
  for(auto item:d1){
    std::cout<<item<<std::endl;
  }
  for(auto item:d2){
    std::cout<<item<<std::endl;
  }

}
