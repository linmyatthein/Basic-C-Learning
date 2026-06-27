#include<iostream>

int main()
{

    //syntax
    /*
       for(data_type variable : collection )
        {
          use variable
        }
    */



    int number[]={10,20,30,40,50};

    for(int num : number)
    {
        std::cout<<num<<std::endl;
    }std::cout<<"\n";

    std::string name="Lin Myat Thein";

    for (char cha : name)
    {
        std::cout<< cha <<std::endl;
    }
    return 0;
}