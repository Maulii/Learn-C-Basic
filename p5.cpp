#include <iostream>
using namespace std;

int main(){
    int amount;
    cin>>amount;
    if(amount>5000){
        if(amount>10000){
            cout<<"Roadtrip with Neha\n";
        } else {
            cout<<"Shopping with Neha\n";
        }
    } else if(amount>2000){ 
    cout<<"Priya\n";}
    else{
        cout<<"Friends\n";
    }
    return 0;
}