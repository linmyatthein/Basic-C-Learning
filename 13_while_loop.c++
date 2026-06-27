#include<iostream>
//do while and while loop

//do while loop do at least one it's work no matter it true or false.

int main()
{
    int i=5;
    while(i<5)
    {
        i++;
    }
    std::cout<<i<<std::endl;

    int j=5;
    do
    {
        j++;
    } while (j<5);

    std::cout<<j<<std::endl;
    

    return 0;
}