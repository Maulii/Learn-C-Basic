#include <iostream>
using namespace std;
int main()
{
    int len, b;
    cout<<"Enter length: ";
    cin>>len;
    cout<<"Enter breath: ";
    cin>>b;

    for(int i=1;i<=len;i++){
        for(int j=1;j<=b;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}