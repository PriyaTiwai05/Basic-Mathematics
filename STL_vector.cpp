#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(2);
    v.push_back(56);
    v.push_back(20);
    
    //for(vector <int>:: iterator it= v.begin(); it !=v.end();it++)
    //{
     //  cout<<*it<<" ";
    //}
    
    for(auto it= v.begin(); it !=v.end();it++)
    {
      cout<<*it<<" ";

}
cout<<endl;
v.erase(v.begin()+1);//remove 3
for(auto it= v.begin(); it !=v.end();it++)
    {
      cout<<*it<<" ";
}
cout<<endl;
//now its {1,5,7,2,56,20}
v.erase(v.begin()+3,v.begin()+5);
for(auto it= v.begin(); it !=v.end();it++)
    {
      cout<<*it<<" ";
}

    
    
    return 0;
}