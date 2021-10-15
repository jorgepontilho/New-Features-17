#include <iostream>
#include <string>
#include <string_view>

int main ()
{
    std::string s = "Teste";
    std::string_view sw = "Teste";
    std::cout << sizeof(s) << std::endl;
    std::cout << sizeof(sw);
    return 0;
}