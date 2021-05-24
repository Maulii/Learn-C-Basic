#include <iostream>
using namespace std;
int main()
{
    char c;
    int Lcase, Ucase;
    cout<<"Enter a character: ";
    cin>>c;
    Lcase = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    Ucase = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    if(c == Lcase||c== Ucase){
        cout<<c<<" is a vowel!\n:";
    }
    
    else{
        cout<<c<<" is not a vowel!\n";
    }

    return 0;
}