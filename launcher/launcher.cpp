#include "file.h"
#include "library.h"
#include "launcher.hpp"

#include <iostream>

int main(void)
{
   Print();
   Library_Print();
   std::cout << LAUNCHER_CPP_STR << std::endl;
   return 0;
}
