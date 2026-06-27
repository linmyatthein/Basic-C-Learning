#include<iostream>

int main()
{
    //format -----> condition ? expression 1 : expression 2;
    //replace to if else statement
    
    int age;

    std::cout<<"Enter Your age :";
    std::cin>>age;

    age>=18 ? std::cout<<"Your allow." : std::cout<<"You are not allow.";
    
    std::string result;

    int mark;
    std::cout<<"Enter your mark :";
    std::cin>>mark;

    result=(mark>=40) ? "Pass" : "Fail";

    std::cout<<"You"<<" "<<result<<" the exam.";
    return 0;
}