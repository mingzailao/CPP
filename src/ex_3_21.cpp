#include<vector>
#include<iostream>
int main(){
  std::vector<int> ivec;
  int i;
  while(std::cin>>i){
    ivec.push_back(i);
  }
  // for(decltype(ivec.size()) j;i<ivec.size();j++){
  //   std::cout<<ivec.at(j)<<" ";
  // }
  for(auto it=ivec.cbegin();it!=ivec.cend();++it){
    std::cout<<*it<<" ";
  }
  std::cout<<std::endl;
  return 0;
}
