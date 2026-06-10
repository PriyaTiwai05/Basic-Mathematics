#include <iostream>
using namespace std;
int binToDec(int binNum){
    int ans = 0;
    int pow = 1;
    while (binNum>0)
    {
       int rem = binNum%10;
       ans += rem * pow;
       binNum /= 10;
       pow = pow*2;
    }
   return ans; 
}
int main(){
  cout<<binToDec(100);
    return 0;
}