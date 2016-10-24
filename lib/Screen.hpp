#ifndef SCREEN_H_
#define SCREEN_H_


#include<iostream>
#include<string>
#include "Window_mgr.hpp"
class Window_mgr;
class Screen{
  //  using ScreenIndex = std::vector<Screen>::size_type;
  //  friend void Window_mgr::clear(ScreenIndex);
public:
  using pos=std::string::size_type;
  Screen()=default;
  Screen(pos ht,pos wd):height(ht),width(wd),contents(ht*wd,' '){}
  Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}



  char get() const{return contents[curson];}
  char get(pos r,pos c){return contents[r*width+c];}


  inline Screen& move(pos r, pos c);
  inline Screen& set(char c);
  inline Screen& set(pos r, pos c, char ch);

  const Screen& display(std::ostream &os) const { do_display(os); return *this; }
  Screen& display(std::ostream &os) { do_display(os); return *this; }

private:
  pos curson=0;
  pos height=0,width=0;
  std::string contents;

  void do_display(std::ostream &os) const { os << contents; }
};




inline Screen& Screen::move( pos r, pos c ){
  curson=r*width+c;
  return *this;
}
inline Screen& Screen::set( char c ){
  contents[curson]=c;
  return *this;
}
inline Screen& Screen::set( pos r, pos c, char ch ){
  contents[r*width+c]=ch;
  return *this;
}
// inline void clear(ScreenIndex i){
//   if (i >= screens.size()) return;    // judge for out_of_range.
//   Screen &s = screens[i];
//   s.contents = std::string(s.height * s.width, ' ');
// }
#endif
