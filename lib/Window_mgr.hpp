#ifndef WINDOW_MGR_H_
#define WINDOW_MGR_H_

#include "Screen.hpp"
#include <vector>
#include <string>
#include <iostream>

class Screen;
using ScreenIndex = std::vector<Screen>::size_type;

class Window_mgr {
public:
  inline void clear(ScreenIndex);
private:
  std::vector<Screen> screens;
};



#endif
