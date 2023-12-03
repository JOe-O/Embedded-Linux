
#include <iostream>   
#include <algorithm>   
#include <array>
#include <list>
#include <iomanip>
#include <cctype>
#include <string>
#include <limits>

// Global variable to track unique IDs for contacts
int globalID = 1;

// Class definition for a contact in the phonebook
class Phonebook
{   
    private:
        std::string Name;
        int Phonenumber;
        int ID{};

    public:
        // Constructor to initialize a contact with a name and phone number
        Phonebook(std::string name, int phone)
        {
            Name = name;
            Phonenumber = phone;

            ID = globalID++;
        }
        // Getter methods for retrieving contact information
        std::string getName()
        {
            return Name;
        }

        int getNumber()
        {
            return Phonenumber;
        }
         int getID()
        {
            return ID;
        }
        // Function to decrement the contact's ID
        void decrementID()
        {
            ID = getID() -1;
        }


};
// Function to display the main menu prompt
void menuPromt()
{
    std::cout << "---------------------------------------------------------------"<< std::endl;
    std::cout << "Welcome To Your Address Book, How Can I Help You?" << std::endl;
    std::cout << "---------------------------------------------------------------"<< std::endl;
    std::cout << std::setw(3)<< " | "  << "List" << std::setw(10) << "| " << "Lists All Users" << std::endl;
    std::cout << std::setw(3)<< " | "  << "Add" << std::setw(11) << "| " << "Adds a User" << std::endl;
    std::cout << std::setw(3)<< " | "  << "Delete" << std::setw(8) << "| " << "Deletes a User" << std::endl;
    std::cout << std::setw(3)<< " | "  << "Delete all" << std::setw(4) << "| " << "Deletes All Users" << std::endl;
    std::cout << std::setw(3)<< " | "  << "Search" << std::setw(8) << "| " << "Searches For a User" << std::endl;
    std::cout << std::setw(3)<< " | "  << "Close" << std::setw(9) << "| " << "Closes The Address Book" << std::endl;
}
// Function to print the list of contacts
void listContacts(std::list<Phonebook> contacts)
{
    if(contacts.size())
    {
        for(auto& contact : contacts)
        {
            std::cout << "------------------------------------------" << std::endl;
            std::cout << "ID : "<< contact.getID() << std::endl;
            std::cout << "Name :  "<< contact.getName()<< std::endl;
            std::cout << "Number :  " << contact.getNumber() << std::endl;
            std::cout << "------------------------------------------" << std::endl;

        };
    }
    else
    {
        std::cout << "No Contacts Found!";
    }
    std::cout << std::endl << std::endl;
}
// Function to search for a contact by name
void searchContacts(std::list<Phonebook> &contacts,std::string inputName)
{
    auto contactIterator = std::find_if(contacts.begin(),contacts.end(),[&inputName](Phonebook &contact)
    {
        return contact.getName() == inputName;
    });

    if(contactIterator != contacts.end())
    {
        std::cout << "------------------------------------------" << std::endl;
        std::cout << std::setw(28)<< "Contact Found!" << std::endl;
        std::cout << "------------------------------------------" << std::endl;
        std::cout << "ID : "<< contactIterator->getID() << std::endl;
        std::cout << "Name :  "<< contactIterator->getName()<< std::endl;
        std::cout << "Number :  " << contactIterator->getNumber() << std::endl;
        std::cout << "------------------------------------------" << std::endl;

    }
    else
    {
        std::cout << "------------------------------------------" << std::endl;
        std::cout << std::setw(30)<< "Contact Not Found!" << std::endl;
        std::cout << "------------------------------------------" << std::endl;
    }
}
// Function to delete a contact by ID
void deleteContact(std::list<Phonebook> &contacts,int inputID)
{
   auto foundIterator = std::remove_if(contacts.begin(),contacts.end(),[&inputID](Phonebook &contact)
    {
        return contact.getID() == inputID;
    });

    if(foundIterator != contacts.end())
    {
        contacts.erase(foundIterator);
        globalID--;

    }
    else
    {
        std::cout << "ID Not Found!" << std::endl << std::endl;
    }

}
// Function to convert a string to lowercase
std::string toLowerCase(std::string str)
{
    std::transform(str.begin(),str.end(),str.begin(),[](unsigned char c)
    {
        return std::tolower(c);

    });
    return str;
}
int main() {

    std::list<Phonebook> contacts;
    
    // Lambda function to create a contact and add it to the lis
    auto createContact = [&contacts](std::string Name, int Number)
    {
        contacts.emplace_back(Name,Number);
    };

    std::string promtAnswer;
    while(true)
    {
        menuPromt();
        std::cout << "Please Choose an Option: ";
        std::getline(std::cin,promtAnswer);
        promtAnswer = toLowerCase(promtAnswer);
        
        if(promtAnswer == "list")
        {
            listContacts(contacts);
        }
        else if(promtAnswer == "add")
        {
            std::string inputName;
            int inputNumber{};
            std::cout << "Please Enter The Name: ";
            std::getline(std::cin,inputName);
            std::cout << "Please Enter The Number: ";
            std::cin >> inputNumber;

            // Ignore the newline character in the input buffer
            std::cin.ignore();
            
            createContact(inputName,inputNumber);
            
        }
        else if(promtAnswer == "delete")
        {
            int inputID{};
            std::cout << "Enter the ID of Contact : ";
            std::cin >> inputID;

            // Ignore the newline character in the input buffer
            std::cin.ignore();

            deleteContact(contacts,inputID);

            for(auto &contact : contacts)
            {
                contact.decrementID();
            }
            
        }
        else if(promtAnswer == "delete all")
        {
            contacts.clear();
            globalID = 1;
        }
        else if(promtAnswer == "search")
        {
            std::string inputName;
            std::cout << "Enter a Name to Search For: ";
            std::getline(std::cin,inputName);
            
            searchContacts(contacts,inputName);
        }
        else if(promtAnswer == "close")
        {
            return 0;  
        }
        else
        {
            std::cout << "Invalid Option" << std::endl << std::endl;
        }

    }
  
}
