//print prime
#include <iostream>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;

    for(int num=a;num<=b;num++){
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if (i==num){
            cout<<num<<endl;
        }
    }
    return 0;

}