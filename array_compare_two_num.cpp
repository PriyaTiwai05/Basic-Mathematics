#include <iostream>
using namespace std;

int main(){
    int num[]={3,7,55,89,-2,66,1};
    int size = 7;
    int smallest = INT8_MAX;
    int largest = INT8_MIN;
    for(int i = 0;i<=7;i++){
        smallest = min(num[i],smallest);
        smallest = max(num[i],largest);
        }
    
    cout<<"smallest "<<smallest;
    cout<<"largest "<<largest;
    return 0;
}