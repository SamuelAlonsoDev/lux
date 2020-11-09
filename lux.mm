#if defined(lux_console)
#include <iostream>
#include <core/unique_ptr.hpp>

int main()
{
    lux::unique_ptr<int> i(67);
    std::cout << "hello lux";
    return 0;
}
#endif