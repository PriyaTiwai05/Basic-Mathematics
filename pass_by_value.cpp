#include <iostream>
using namespace std;
int sum(int a,int b){
    a = a + 10;
    b = b + 20;
    return a+b;
}
int main(){
  int a = 6;
  int b = 5;
  cout<<sum(a,b)<<endl;
  cout<<a<<endl;
  cout<<b<<endl;  
    return 0;
}
//pass by value
//Pass by Value means that when a function is called, a copy of the variable is passed to the function.
// Any changes made inside the function affect only the copy, not the original variable.