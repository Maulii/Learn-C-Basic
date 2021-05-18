#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    if(x==y){
        cout<<"Both the numbers are equal.";
    }
    else{
        if(x>y){
            cout<<x<<" is greater than "<<y;
        }
        else{
            cout<<x<<" is less than "<<y;
        }
    }
    return 0;
}