#include "std_lib_facilities.h"

int main()
{
  cout << "Hello, World!\n";
  
  // wait for a character to be entered
  // prevent them from closing before you have a chance to read the output
  // needed on some Windows machines
  keep_window_open();
  
  return 0;
}
