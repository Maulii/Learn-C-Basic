#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(n<10)
    {
        cout<<n<<" is less than 10!\n";
    }
    else if(n>10)
    {
        cout<<n<<" is greater than 10!\n";
    }
    else 
    {
        cout<<n<<" is equal to 10!\n";
    }
    return 0;
}