/*
 * Creating a custom String class
 */

#include <iostream>
#include <string>
#include <vector>
class String
{
private:
    friend int main();
    std::string *ptr;

public:
    
    String() : ptr(nullptr) {}

    //parameter constructor
    explicit String(const std::string &s) : ptr(nullptr)
    {
        if(ptr != nullptr)
        {
            delete ptr;
            ptr = nullptr;
        }
        ptr = new std::string(s);
    }

    //copy constructor
    String(const String &other)
    {
        if(other.ptr != nullptr)
        {
            ptr = new std::string(*other.ptr);
        }
        else
        {
            ptr = nullptr;
        }


    }
    //move constructor
    String(String && other) //takes an rvalue
    {

        if(other.ptr)
        {
            this->ptr = other.ptr;
            other.ptr = nullptr;
        }

        
    }

    void setString(const std::string &s2)
    {
         if (ptr != nullptr)
        {
            delete ptr; 
            ptr = nullptr;
         }

        try
        {
            ptr = new std::string(s2);  
        }
        catch (const std::bad_alloc &)
        {
            // Handling memory allocation failure
            std::cerr << "Error: Memory allocation failed in setString\n";     
            ptr = nullptr;
        }
    }
    //copy assignment 
    String &operator=(const String &other)
    {
        if(&other != this)
        {
           if(other.ptr != nullptr)
           {
                delete ptr;
                ptr = nullptr;
                ptr = new std::string(other.getString());              
           }
 
            return *this;

        }
        else
        {
            return *this;
        }
    }

    String &operator=(String &&other)
    {
        if(&other != this)
        {
        if(this->ptr)
        {
            delete ptr;
        }
        
        this->ptr = other.ptr;
        other.ptr = nullptr;

        }
        return *this;
    }


    std::string getString() const
    {
        return *ptr;
    }

    ~String()
    {
        delete ptr;
        ptr = nullptr;
    }


};

int main()
{
    String name("ahmed1");
    String name2;
    name2 = std::move(name);
    std::cout << name2.getString() << std::endl;
    
    return 0;
}
