#include<bits/stdc++.h>
using namespace std;

int redundant(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i] == ')'){
            if(st.top() == '(')
                return 1;
            else{
                while(st.top() != '(')
                    st.pop();
                st.pop();
            }
        }
        else
            st.push(s[i]);
    }
    return 0;
}