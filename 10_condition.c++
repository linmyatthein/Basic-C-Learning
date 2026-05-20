#include<iostream>

int main()
{
    int age;

    std::cout<<"Enter your age : ";
    std::cin>>age;

    if(age>=18)
    {
        std::cout<<"Wellcome from the club."<<std::endl;
    }
    else if(age<=0)
    {
        std::cout<<"You age is invalid."<<std::endl;
    }
    else
    {
        std::cout<<"You are not allow for this club."<<std::endl;
    }

    return 0;
}