#include<iostream>
#include<vector>
inline int f1(int a,int b)
{
  return a+b;
}
inline int f2(int a,int b){
  return a-b;
}
inline int f3(int a,int b){
  return a*b;
}
inline int f4(int a,int b){
  return a/b;
}

using pf=decltype(f1) *;
int main(){
  std::vector<pf> pfvec;
  pfvec.push_back(&f1);
  pfvec.push_back(&f2);
  pfvec.push_back(&f3);
  pfvec.push_back(&f4);
  int a=10,b=2;
  std::cout<<(*pfvec[0])(a,b)<<std::endl;
  std::cout<<(*pfvec[1])(a,b)<<std::endl;
  std::cout<<(*pfvec[2])(a,b)<<std::endl;
  std::cout<<(*pfvec[3])(a,b)<<std::endl;
  return 0;
}
