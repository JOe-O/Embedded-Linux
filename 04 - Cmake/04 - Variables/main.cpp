#include <iostream>
#include "calc.hpp"
#include "wifi.hpp"
#include "config.h"

int main()
{
    std::cout << sum(2,4) << std::endl;

    WIFI_Init();

    std::cout << "Product Type: " << ProductType << std::endl;
    std::cout << "Product Year: " << ProductYear << std::endl;

    return 0;
}