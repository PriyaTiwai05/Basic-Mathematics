#include <iostream>
using namespace std;
//int → return type ,factorial → function name ,(int n) → parameter
int factorial(int n){
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact *= i;
    }
    return fact;


}
int main(){
   cout<<factorial(5) ;
    return 0;
}
//Time and Space Complexity
//Time Complexity: O(n)
//Space Complexity: O(1)
//When a function is called, memory is allocated in a region called the Call Stack.