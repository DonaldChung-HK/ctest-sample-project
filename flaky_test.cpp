#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
 


int main() 
{
    sleep(2);
    std::srand(time(0));  // Initialize random number generator.
    int result {std::rand() % 10};

    if (0 <= result && result <= 3) {
        std::cout <<"The result is " << result << std::endl;
        std::cout << "This should be a success \nif not check again" << std::endl;
        return 0;
    } else if (4 <= result && result <= 7) {
        std::cout << "This is a flaky test" << std::endl;
        std::cout <<"The result is " << result << std::endl;
        std::cout << "This should be a fail \nif not check again" << std::endl;
        std::ifstream f{"message_a.txt"};
        std::cout << f.rdbuf();
        return 1;
    } else {
        std::cout << "This is a flaky test" << std::endl;
        std::cout<<"The result is " << result << std::endl;
        std::cout << "This should be a fail \nif not check again" << std::endl;
        std::ifstream f("message_b.txt");
        std::cout << f.rdbuf();
        return 1;
    }
}