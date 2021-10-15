#include <iostream>
#include <array>
int main ()
{
    std::array<int,3> ar {1,2,3}; //C++11
    std::array  ar17 {1,2,3}; //C++17
    
    for (int i:ar)
        std::cout << i;
    
    std::cout << std::endl;    
    for (int i:ar17)
        std::cout << i;
    
    return 0;
}
