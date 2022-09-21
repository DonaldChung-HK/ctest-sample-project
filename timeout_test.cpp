#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
 
#include <iostream>
#include <cstdlib>

int main()
{
     std::cout<<"This is the first line of code" << std::endl;
     sleep(6);
     std::cout<<"This is second line of code after 6 seconds of wait" << std::endl;
     return 0;
}