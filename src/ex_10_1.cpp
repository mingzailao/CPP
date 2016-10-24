#include<algorithm>
#include<vector>
#include<iostream>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
int main(){
  vector<int> ivec;
  int number;
  cin>>number;
  int i;
  while(cin>>i){
    ivec.push_back(i);
  }
  cout<<std::count(ivec.cbegin(), ivec.cend(),number)<<endl;;
  return 0;
}
