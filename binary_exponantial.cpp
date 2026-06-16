#include <iostream>
using namespace std;
double myPow(double x,int n){
    long binForm = n;
    double ans = 1;
    while (binForm>0){
        if(binForm%2==1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}
int main(){
    //compute x^n
cout<<myPow(3,5)<<" ";
    return 0;
}