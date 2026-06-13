#include <iostream>
using namespace std;
//power of 2 without any loop
//1 = 1
//2 = 10
//4 = 100
//8 = 1000
//we analyz that binary form of power 2 have only 1 time 1
//so if add of two no. n&(n-1)  is 0 then it is power of 2
//8=1000
//7=0111
//8-7=0000
bool isPowerOf2(int n){
    return n>0 && (n & (n-1))==0;
}
int main(){
   int n;
   cout<<" enter the number "<<endl;
   cin>>n;
   if(isPowerOf2(n)) {
    cout<<"it is power of 2";
}
else{
    cout<<"it is not power of 2";
}   

    return 0;
}