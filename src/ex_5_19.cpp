#include<string>
#include<iostream>

using std::cin;
using std::endl;
using std::cout;
using std::string;

int main(){
  string s1,s2;
  do{
    cout<<(s1.size()>s2.size()?s1:s2)<<endl;;
  }while(cin>>s1>>s2);
  return 0;
}


