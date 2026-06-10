#include <iostream>
using namespace std;
int decNum(int n){//n is decimal no.
    int ans = 0;
    int pow = 1;
    while (n>0)
    {
       int rem = n %2;
       n = n/2;
       ans += rem*(pow);
       pow = pow *10;

    }
    return ans;
    
}
int main(){
    for(int i = 0;i<=10;i++){
        cout<<decNum(i)<<endl;
    }
    return 0;
}