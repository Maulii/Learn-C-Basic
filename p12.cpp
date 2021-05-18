#include <iostream>
using namespace std;
int main(){
    char c;
    int upperv, lowerv;
    cout<<"Enter a character: ";
    cin>>c;
    upperv = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    lowerv = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');

    if(lowerv||upperv){
        cout<<c<<" is a vowel.";
    }
    else{
        cout<<c<<" is a consonent.";
    }
    return 0;
}