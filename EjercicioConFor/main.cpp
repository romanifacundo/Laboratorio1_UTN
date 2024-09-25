#include <iostream>

using namespace std;

int main()
{

    for(int i = 0; i <20; i++)
    {
        if(i%3 == 0)
        {
            cout<<""<< i <<endl;
        }
        else
        {
           cout<<"No es multiplo de tres: "<< i <<endl;
        }
    }

    return 0;
}
