#include <iostream>
using namespace std;

int main(){
    int num[]={3,7,55,89,-2,66,1};
    int size = 7;
    int smallest = INT8_MAX;
    for(int i = 0;i<=7;i++){
        if(num[i]<smallest){
            smallest = num[i];
        }
    }
    cout<<"smallest "<<smallest;
    return 0;
}