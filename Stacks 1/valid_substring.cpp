#include<bits/stdc++.h>
using namespace std;

int validSub(string s){
    int count = 0;
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i] == '(')
            st.push(s[i]);
    }
    for(int i=0;i<s.length();i++){
        while(!st.empty()){
            switch(s[i]){
                case ')':
                    st.pop();
                    count += 2;
                    break;
            }
        }
    }
    return count;
}

int main(){
    int x;
    string s = "(()(";
    x = validSub(s);
    cout<<x;
}