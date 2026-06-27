#include<iostream>

int main()
{
    start:
    int age=0;
    std::string name;

    std::cout<<"Enter your name :";
    getline(std::cin>>std::ws,name);

    std::cout<<"Enter your age :";
    std::cin>>age;

    if(age<=0)
    {
        goto start;
    }

    std::cout<<"Hello"<<" "<<name<<"."<<"You are "<<age;

    return 0;
}
