#include<string>
#include<iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;

using ArrT=int[5];
int odd[]={1,3,5,7,9};
int even[]={0,2,4,6,8};

const ArrT& arrPtr(int i)
{
  return (i % 2) ? odd : even;
}
int main(){
  for(auto i:arrPtr(10)){
    cout<<i<<" ";
  }
  cout<<endl;
}
