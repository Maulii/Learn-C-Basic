//not prime
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: \n";
    cin>>n;
    int i;
    for (i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not a prime\n";
            break;
        }
    }
    if (i==n){
        cout<<"Prime Number\n";
    }
    return 0;
}