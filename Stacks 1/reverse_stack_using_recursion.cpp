#include<bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int> &st, char x){
    if(st.size() == 0)
        st.push(x);
    else{
        char a = st.top();
        st.pop();
        insert_at_bottom(st, x);
        st.push(a);
    }
}

void reverse(stack<int> &st,int x){
    if(st.size() > 0){
        char x = st.top();
        st.pop();
        reverse(st,x);
        insert_at_bottom(st, x);
    }
}