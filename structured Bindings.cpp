#include <iostream>
int main()
{
    int a[2] = {1,2};
 
    auto [x,y] = a; //binding
    std::cout << x << y;
}