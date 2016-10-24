#include<iostream>
#include<string>
std::string work(int number){
  if(number<0||number>100)
    return "Wrong number";
  if(number<60)
    return "F";
  else if(number<70)
    return "D";
  else if(number<80)
    return "C";
  else if(number<90)
    return "B";
  else if(number<100)
    return "A";
  else
    return "A++";
}
int main(){
  int number;
  while(std::cin>>number){
    std::cout<<work(number)<<std::endl;
  }
}
