#include <iostream>

int main ()
{
    if (int x = 1; x>1)
        std::cout << ">";
    else
        std::cout << "<";
        
    switch(int x = 1; x)
    {
    case 1:
        std::cout << "1";
    case 2:
        std::cout << "2";
    };
        
    return 0;
}