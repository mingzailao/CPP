#include<vector>
#include<iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

bool isChild(vector<int> ivec1,vector<int> ivec2){
  if(ivec1.size()<ivec2.size()){
    for(auto it1=ivec1.cbegin(),it2=ivec2.cbegin();
        it1!=ivec1.cend();++it1,++it2){
      if((*it1)!=(*it2)){
        return false;
      }
    }
    return true;
  }
  else{
    return isChild(ivec2,ivec1);
  }
}
int main(){
  vector<int> ivec1={0,1,1,2},ivec2={0,1,1,1,3,5,8};
  cout<<isChild(ivec1,ivec2)<<endl;
}
