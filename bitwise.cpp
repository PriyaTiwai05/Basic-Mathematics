#include <iostream>
using namespace std;

int main(){
    //Bitwise Operator
    int a = 6,b= 10;
    cout<<"AND operator: "<<(a&b)<<endl;
    cout<<"OR operator: "<<(a|b)<<endl;
    cout<<"XOR operator: "<<(a^b)<<endl;
    //LEFT shift = a*2^b, in example 4 is a and 1 is b
    cout<<"LEFT SHIFT operator: "<<(4<<1)<<endl;
    cout<<"LEFT SHIFT operator: "<<(10<<2)<<endl;
    //RIGHT shift = a/2^b, in example 8 is a and 1 is b
    cout<<"RIGHT SHIFT operator: "<<(8>>1)<<endl;
    cout<<"RIGHT SHIFT operator: "<<(10>>2)<<endl;
    cout<<"RIGHT SHIFT operator: "<<(10>>1)<<endl;
    return 0;
}