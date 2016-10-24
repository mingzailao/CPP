#include<string>
#include<iostream>
int  main(){
  const std::string s="0123456789ABCDEF";
  std::string result;
  std::string::size_type n;
  while(std::cin>>n)
    if(n<s.size())
      result+=s[n];
  std::cout<<result<<std::endl;
  return 0;
}
