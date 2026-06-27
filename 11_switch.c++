#include<iostream>
#include<string>
int main()
{
    char grade;

    std::cout<<"Enter your grade : ";
    std::cin>>grade;

    switch(grade)
    {
        case 'a':
        case 'A':
            std::cout<<"Congradulation.";
            break;

        case 'b':
        case 'B':
            std::cout<<"Nice.";
            break;

        case 'c':
        case 'C':
            std::cout<<"You need to study more.";
            break;

        case 'd':
        case 'D':
            std::cout<<"You need to study very hard.";
            break;

        case 'f':
        case 'F':
            std::cout<<"You have to re-exam";
            break;

        default:
            std::cout<<"Your grade is Invalid.";
            break;
    }

    return 0;
}