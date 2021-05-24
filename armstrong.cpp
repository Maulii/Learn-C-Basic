#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int originaln=n;
    int sum = 0;

    while(n>0){
        int lastDigit= n%10;
        sum+=pow(lastDigit,3);
        n = n/10;
    }

    if(sum == originaln){
        cout<<originaln<<" is an Armstrong number!"<<endl;
    }else{
        cout<<originaln<<" is not an Armstrong number!"<<endl;
    }

    return 0;
}