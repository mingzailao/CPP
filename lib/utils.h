#ifndef _UTILS_H_
#define _UTILS_H_

#include<cstddef>
#include<iostream>
#include<string>
#include<vector>
#include<initializer_list>
#include<fstream>
#include<forward_list>
using std::forward_list;
using std::ifstream;
using std::string;
using std::vector;

template<typename Sequence>
void print(Sequence const& seq)
{
  for (const auto& i : seq)
    std::cout << i << " ";
  std::cout << std::endl;
}
template<typename Sequence>
std::ostream& println(Sequence const& seq)
{
  for (auto const& elem : seq) 
    std::cout << elem << " ";
  return std::cout << std::endl;
}



size_t generate()
{
  static size_t ctr = 0;
  return ctr++;
}

void swap(int* lhs,int* rhs){
  std::cout<<"using Pointer!"<<std::endl;
  int tmp;
  tmp=*lhs;
  *lhs=*rhs;
  *rhs=tmp;
}

void reset(int &i){
  i=0;
}

void swap(int & lhs,int & rhs){
  std::cout<<"using reference!"<<std::endl;
  int tmp=lhs;
  lhs=rhs;
  rhs=tmp;
}

bool any_capital(const string & s){
  for(auto i:s)
    if (isupper(i)) return true;
  return false;
}
void to_lowercase(string &s){
  for(auto &i:s)
    i=tolower(i);
}
int larger_one(int a, int *p){
  return (a>*p)?a:*p;
}
int sum(std::initializer_list<int> const il){
  int sum=0;
  for(auto i:il)
    sum+=i;
  return sum;
}
void print(std::vector<int>::const_iterator cbeg,std::vector<int>::const_iterator cend){
  while(cbeg!=cend)
    std::cout<<*cbeg++<<" ";
  std::cout<<std::endl;
}


string make_plural(size_t ctr,const string &word,const string &ending="s"){
  return (ctr>1)?word+ending:word;
}


inline bool is_shorter(const string &lft, const string &rht) // defining in the header more better.
{
  return lft.size() < rht.size();
}

std::istream& myPrintf(std::istream& is){
  std::string buf;
  while(std::getline(is,buf)){
    std::cout<<buf<<std::endl;
  }
  is.clear();
  return is;
}
void ReadFileToVec(const string& fileName,vector<string>& vec){
  ifstream ifs(fileName);
  if(ifs){
    string buf;
    while(std::getline(ifs,buf)){
      vec.push_back(buf);
    }
  }
}
void ReadFileToVec_variant(const string& fileName,vector<string>& vec){
  ifstream ifs(fileName);
  if(ifs){
    string buf;
    while(ifs>>buf){
      vec.push_back(buf);
    }
  }
}
bool contains(vector<int>::const_iterator begin,vector<int>::const_iterator end,int i){
  while(begin!=end){
    if(*begin==i) return true;
    begin++;
  }
  return false;
}
vector<int>::const_iterator find(vector<int>::const_iterator begin,vector<int>::const_iterator end,int i){
  while(begin!=end){
    if(*begin==i) return begin;
    begin++;
  }
  return end;
}

bool VectorSame(vector<int> ivec1,vector<int> ivec2){
  return ivec1==ivec2;
}

void find_and_insert(forward_list<string> &list, string const& to_find, string const& to_add)
{
  auto prev = list.before_begin();
  for (auto curr = list.begin(); curr != list.end(); prev = curr++)
    {
      if (*curr == to_find)
        {
          list.insert_after(curr, to_add);
          return;
        }
    }
  list.insert_after(prev, to_add);
}
void replace_with(string &s,string const& oldVal,string const& newVal){
  for(auto cur=s.begin();cur<=s.end()-oldVal.size();){
    if(oldVal==string{cur,cur+oldVal.size()}){
      cur=s.erase(cur, cur+oldVal.size());
      cur=s.insert(cur, newVal.begin(),newVal.end());
      cur+=newVal.size();
    }
    else{
      ++cur;
    }
  }
}

string add_pre_and_suffix(string name, string const& pre, string const& su){
  name.insert(name.begin(), pre.cbegin(), pre.cend());
  name.append(su);
  return name;
}
void ivecPrint(const vector<int> ivec){
  for(const auto item:ivec){
    std::cout<<item<<" ";
  }
  std::cout<<std::endl;
}
#endif
