#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(4);//{3,3,2,1}
    st.emplace(5);//{5,3,3,2,1}
    

    cout<<st.top();

    return 0;
}