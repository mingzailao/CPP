#include<iostream>
#include<vector>



int main(){
  int item;
  std::vector<int> ivec;
  while(std::cin>>item){
    ivec.push_back(item);
  }
  // for(decltype(ivec.size()) i=0;i<ivec.size()-1;i++){
  //   std::cout<<ivec[i]+ivec[i+1]<<" ";
  // }
  // std::cout<<std::endl;

  // //another
  // for(decltype(ivec.size()) i=0;i<ivec.size();i++){
  //   std::cout<<ivec[i]+ivec[ivec.size()-1-i]<<" ";
  // }
  // std::cout<<std::endl;
  for(auto it=ivec.cbegin();it<ivec.cend();it++){
    std::cout<<*it+*(it+1)<<" ";
  }
  std::cout<<std::endl;
  for(auto it=ivec.cbegin();it<ivec.cend();it++){
    std::cout<<*it+*(ivec.cend()-(it-ivec.cbegin())-1)<<" ";
  }
  std::cout<<std::endl;
  return 0;
}

