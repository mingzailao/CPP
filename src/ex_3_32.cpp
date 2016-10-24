#include<iostream>
#include<cstddef>
#include<vector>

void vecPrint(std::vector<int> ivec){
  for(auto const i:ivec){
    std::cout<<i<<" ";
  }
  std::cout<<std::endl;
}
void vecPrint(std::ostream os,std::vector<int> ivec);
int main(){
  int a[10];
  for(size_t i=0;i<10;i++){
    a[i]=i;
  }
  int b[10];
  for(size_t i=0;i<10;i++){
    b[i]=a[i];
  }
  for(auto i:b){
    std::cout<<i<<" ";
  }
  std::cout<<std::endl;
  std::vector<int> ivec(10);
  for(auto it=ivec.begin();it<ivec.end();it++){
    *it=it-ivec.begin();
  }
  vecPrint(ivec);
  std::vector<int> ivec1(ivec.size());
  for(auto it=ivec.begin();it<ivec.end();it++){
    *(ivec1.begin()+(it-ivec.begin()))=*it;
  }
  vecPrint(ivec1);
  return 0;
}








