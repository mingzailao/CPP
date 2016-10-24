#include<iostream>
#include<stdexcept>
int main(){
  for(int i,j;std::cout<<" Input 2 numbers:\n ",std::cin>>i>>j;){
    try{
      if(j==0){
        throw std::runtime_error("divisor is 0");
      }
      std::cout<<i/j<<std::endl;
    }
    catch(std::runtime_error err){
      std::cout<<err.what()<<std::endl;
    }
  }
  return 0;
}
