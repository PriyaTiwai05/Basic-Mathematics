#include <iostream>
using namespace std;
int Sum(int n){
    
    int sd = 0;
while(n>0){
  int  ld = n%10;
    cout<<ld<<endl;
    n = n/10;
    sd += ld;
   
}

return sd;
}
int main(){
     
   cout<<Sum(234);
    return 0;
}