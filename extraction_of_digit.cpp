#include <iostream>
using namespace std;
int count(int n){
    int ans = 0;
    while (n>0)
    {
        int rem = n%10;
        n = n/10;
        cout<<rem<<endl;
        ans += rem;
    }
    return ans;
}
int main(){
  cout<<count(4567);
    return 0;
}