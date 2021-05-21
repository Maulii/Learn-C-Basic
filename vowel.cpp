//find whether an alphabet is consonent or vowel
#include <iostream>
using namespace std;
int main()
{
    char letter;
    cout<<"Enter a letter: "<<endl;
    cin>>letter;

    switch (letter)
    {
    case 'a':
        cout<<"This is a vowel!\n";
        break;
    case 'e':
        cout<<"This is a vowel!\n";
        break;
    case 'i':
        cout<<"This is a vowel!\n";
        break;
    case 'o':
        cout<<"This is a vowel!\n";
        break;
    case 'u':
        cout<<"This is a vowel!\n";
        break;        
    default:
        cout<<"This letter is consonent!\n";
        break;
    }
}