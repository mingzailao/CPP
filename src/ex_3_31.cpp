#include<iostream>
#include<cstddef>

int main(){
  int a[10];
  for(size_t i=0;i<10;i++){
    a[i]=i;
  }
  for(auto i:a){
    std::cout<<i<<" ";
  }
  std::cout<<std::endl;
}
