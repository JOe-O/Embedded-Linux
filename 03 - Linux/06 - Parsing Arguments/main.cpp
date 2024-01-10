#include <iostream>
#include <algorithm>
#include <regex>
#include <string>

int main(int argc, char * argv[])
{
    if (argc < 8) {

        std::cerr << "INCOMPLETE ARGS\nUsage: " << argv[0] << " -m <minute> -h <hour> -d <day of week> <task>" << std::endl;
        return 0;
    }

    std::string args;

    std::smatch matches;
   
    std::regex minutesRegex(R"(-m (\d+))");
    std::regex hoursRegex(R"(-h (\d+))");
    std::regex daysRegex(R"(-d (\w+))");

    std::string cronMin,cronHour,cronDay,cronTask=argv[argc-1];

   for(int i = 0 ; i < argc ; i++)
   {
        std::cout << "arg " << i << ": " << argv[i] << std::endl;

        args.append(argv[i]);
        args.push_back(' ');
   }
   
   if(std::regex_search(args,matches,minutesRegex))
   {
    std::cout << "match minutes: "<< matches[1] << std::endl;
    cronMin = matches[1];
   }
    if(std::regex_search(args,matches,hoursRegex))
   {
    std::cout << "match hours: "<< matches[1]<< std::endl;
    cronHour = matches[1];
   }
   if(std::regex_search(args,matches,daysRegex))
   {
    std::cout << "match days: "<< matches[1]<< std::endl;
    cronDay = matches[1];
   }
    std::cout << "match Task: " << cronTask << std::endl; 
    std::string cronJob = "echo \"" + cronMin + " " + cronHour + " * * " + cronDay + " " + cronTask + "\"";
    cronJob = cronJob + " >> " + "/var/spool/cron/crontabs/joe";
    std::cout << cronJob;

    int cronSuccess = system(cronJob.c_str());

    if(!cronSuccess)
    {
        std::cout << "\nCron Job Added Successfuly!\n";
    }
    else
    {
        std::cout << "\nCron Job Failed to Get Added\n";
    }

    


    return 0;
}