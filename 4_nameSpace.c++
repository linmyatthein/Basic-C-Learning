#include<iostream>

namespace first{
        int x=10;
    }

namespace second{
    int x=20;
}
int main()
{
    using std::cout;
    
    int x=50;

    cout<<x<<std::endl;
    cout<<first::x<<std::endl;
    cout<<second::x<<std::endl;

    return 0;
}