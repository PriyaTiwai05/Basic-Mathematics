
#include <iostream>
using namespace std;
//Recursion means a function calls itself.
int factorial(int n){
    //Base case
    if(n == 0 || n == 1)//0!=1, 1!=1
        return 1;

    return n * factorial(n - 1);//n!=n*(n-1)!,5!= 5*4!
}

int main(){
    cout << factorial(5);
    return 0;
}