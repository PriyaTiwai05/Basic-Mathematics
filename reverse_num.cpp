#include <iostream>
using namespace std;
int Reverse(int n){
    int revNum = 0;
    while (n>0)
    {
       int ld = n%10;
       revNum = (revNum*10)+ld;
       n/=10;

    }
    return revNum;
}
int main(){
    cout<<Reverse(5863);
    return 0;
}