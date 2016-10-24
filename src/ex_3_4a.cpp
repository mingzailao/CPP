#include<iostream>
#include<string>

int main(){
  std::string s1,s2;
  while(std::cin>>s1>>s2){
    if(s1==s2){
      std::cout<<"Equal"<<std::endl;
    }
    else{
      std::cout<<"The larger string is : "<<((s1>s2)? s1 : s2)<<std::endl;
    }
  }
  return 0;
}
