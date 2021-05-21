#include <iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Enter a character: \n";
    cin>>button;

    if(button=='a')
    {
        cout<<"Hello\n";
    }
    else if(button=='b')
    {
        cout<<"Hola\n";

    }
    else if(button=='c')
    {
        cout<<"Namaste\n";

    }
    else if(button=='d')
    {
        cout<<"Bonjour\n";

    }
    else{
        cout<<"I am still learning\n";
    }
    return 0;
}