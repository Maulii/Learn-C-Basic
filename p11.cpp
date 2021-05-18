//WAP to check if a triangle is scalene, equilateral, isosceles!
#include <iostream>
using namespace std;
int main(){
    int s1, s2, s3;
    cout<<"Enter three sides of triangle: ";
    cin>>s1>>s2>>s3;
    if(s1==s2 && s2==s3){
        cout<<"The triangle is equilateral"<<endl;
    }
    else if(s1==s2 || s1==s3 || s2==s3){
        cout<<"The triangle is isosceles"<<endl;
    }
    else{
        cout<<"The triangle is scalene"<<endl;
    }


}