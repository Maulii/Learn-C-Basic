#include <iostream>
using namespace std;
int main(){
    int n;
    int i=0;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    for(int count=1;count<=n;count++){
        i=i+count;
    }
    cout<<i<<endl;
    return 0;
}