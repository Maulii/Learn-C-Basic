#include <iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Enter a Character: "<<endl;
    cin>>button;
    
    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Namaster" << endl;
        break;
    case 'c':
        cout << "Hola" << endl;
        break;
    case 'd':
        cout << "Bonjour" << endl;
        break;
    case 'e':
        cout << "Ciao" << endl;
        break;
    default:
    cout<<"I am still learning more!"<<endl;
        break;
    }
    return 0;
}