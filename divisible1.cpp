#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    if(n%2==0 && n%3==0)
    {
        cout<<n<<" is divisible by both!"<<endl;
    }
    else if(n%2==0)
    {
        cout<<n<<" is divisible by 2!"<<endl;
    }
    else if(n%3==0)
    {
        cout<<n<<" is divisible by 3!"<<endl;
    }
    else
    {
        cout<<n<<" is divisible by none!"<<endl;
    }
    return 0;
    
}