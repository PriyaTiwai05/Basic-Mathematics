#include <iostream>
using namespace std;
void fibonacciseries(int n){
    int a = 0,b=1,c;
    if(n>=1)
    cout<<a<<" ";//print 0
    if(n>=2)
    cout<<b<<" ";//print 1
    //then loop for other elements
    for(int i =3;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
}
int main(){
    fibonacciseries(12) ;
    return 0;
}