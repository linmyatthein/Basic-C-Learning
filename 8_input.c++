#include<iostream>

int main()
{
    int age;
    std::string name,school,major;
    

    std::cout<<"Enter Your age :";
    std::cin>>age;

    std::cout<<"Enter Your Name :";
    std::getline(std::cin >>std::ws , name); //std::ws avoid the new line from the above code (age).
    
    std::cout<<"Enter Your University : ";
    std::getline(std::cin >> std::ws ,school);

    std::cout<<"Enter Your Major :";
    std::cin>>major;

    std::cout<<std::endl << "Name :"<< name << std::endl <<"Age :"<< age << std::endl <<"University :"<< school << std::endl <<"Major :"<< major <<std::endl;
    return 0;
}