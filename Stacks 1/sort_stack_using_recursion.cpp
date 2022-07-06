#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int z){
    if(st.size() == 0)
        st.push(z);
    else{
        if(st.top() > z)
            st.push(z);
        else{
            int a = st.top();
            st.pop();
            insert(st, z);
            st.push(a);
        }
    }
}

void sortStack(stack<int> &st, int x){
    if(st.size() > 0){
        x = st.top();
        st.pop();
        sortStack(st, x);
        insert(st, x);
    }
}