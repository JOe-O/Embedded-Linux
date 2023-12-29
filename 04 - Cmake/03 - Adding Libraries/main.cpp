#include <iostream>
#include "calc.hpp"
#include "wifi.hpp"

int main()
{
    std::cout << sum(2,4) << std::endl;

    WIFI_Init();

    

    return 0;
}