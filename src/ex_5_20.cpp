#include<iostream>
#include<string>

using std::cin;
using std::endl;
using std::cout;
using std::string;
int main(){
  string s;
  string pre;
  while(cin>>s){
    if(s==pre){
      cout<<"String "<<s<<" occurred 2 duplicated times"<<endl;
      break;
    }
    else{
      pre=s;
      cout<<"For now, no string duplicated"<<endl;
    }
  }
}
