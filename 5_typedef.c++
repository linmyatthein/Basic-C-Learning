#include<iostream>
#include<string>

//using text=std::string; = typedef std::string text;

int main()
{
    typedef std::string text;
    text name;

    std::cout<<"Enter your name : ";
    std::getline(std::cin,name);

    std::cout<<"Hello "<<name;

    return 0;
}