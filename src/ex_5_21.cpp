#include<iostream>
#include<string>

using std::cin;
using std::endl;
using std::cout;
using std::string;
int main(){
  string s;
  string pre;
  bool no_twice=true;
  while(cin>>s){
    if(s==pre&&isupper(s[0])){
      cout<<"String "<<s<<" occurred twice in succession."<<endl;
      no_twice=false;
      break;
    }
    else{
      pre=s;
    }
  }
  if (no_twice)
    cout << "no word was repeated." << endl;
}
