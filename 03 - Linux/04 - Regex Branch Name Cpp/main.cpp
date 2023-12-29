#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::string branchName = "feature/TN-123/branchname";

    std::regex branchReg("^[a-zA-Z_]+\\/[A-Z]+-\\d{3}+\\/\\w+$");
    // std::regex branchReg("^\\w+\\/[A-Z]+-\\d{3}+\\/\\w+$");

    if(std::regex_search(branchName,branchReg))
    {
        std::cout << "Branch is Valid." << std::endl;
    }
    else
    {
        std::cout << "Branch is Invalid!" << std::endl;
    }


    return 0;
}