
#include <iostream>
#include <vector>
#include <string>

void func1();
void func2();
void func3();

#define EnterFn     Backtrace obj(__func__)
#define PRINT_BT    obj.printBT()
class Backtrace 
{
    private:
    std::string function;
    static std::vector<std::string> callStack;

    public:
    Backtrace(std::string funcName) : function(funcName)
    {
        std::cout << "Entering " << function << std::endl;
        callStack.push_back(funcName);
    }
    
    ~Backtrace()
    {
        std::cout << "Exiting " << function << std::endl;
    }
    void printBT()
    {
        int i = 1;
        std::cout << "Backtrace as follows : "<< std::endl; 
        for(const auto &functionName : callStack)
        {
            
            std::cout << i << " - " <<functionName << std::endl;
           
            i++;
        } 
        std::cout << "Backtrace is Finished "<< std::endl; 
    }

};
std::vector<std::string> Backtrace::callStack;
void func1()
{
    EnterFn;
    func2();
}
void func2()
{
    EnterFn;
    func3();
}
void func3()
{
    EnterFn;
    PRINT_BT;
}


int main()
{
    EnterFn;
    func1();
    return 0;
}
