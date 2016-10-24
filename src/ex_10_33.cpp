#include<fstream>
#include<iterator>
#include<algorithm>
#include<vector>
#include<iostream>


int  main(int argn,char* argv[]){
  std::ifstream ifs(argv[1]);
  std::ofstream ofs1(argv[2]);
  std::ofstream ofs2(argv[3]);
  std::istream_iterator<int> in(ifs),in_eof;
  std::ostream_iterator<int> o1(ofs1," "),o2(ofs2," ");
  // std::copy(in, in_eof, (((*in)%0x1)?o1:o2));
  std::for_each(in, in_eof, [&o1, &o2](const int i){
      *(i & 0x1 ? o1 : o2)++ = i;
    });
  return 0;
}
