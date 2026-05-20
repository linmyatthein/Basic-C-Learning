#include<iostream>

int main()
{
    //integer (whole number)
    int x=4;

    //decimal number
    double y=4.5;
    float z=5e5;

    //single character
    char grade= 'A';

    //boolean (true or false)
    bool is_student=true;
    bool is_worker=false;

    //string
    std::string name="Lin Myat Thein";

   
    std::cout<<x <<std::endl;
    std::cout<<y <<std::endl;
    std::cout<<z <<std::endl;
    std::cout<<grade <<std::endl;
    std::cout<<is_student <<" " << is_worker << '\n';
    std::cout<< name <<std::endl;

    return 0;
}