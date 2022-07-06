#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char>st;
    int l = s.length();

    for(int i=0 ; i<l ; i++)
        st.push(s[i]);
    
    while(!st.empty()){
        char a;
        a = st.top();
        st.pop();
        cout<<a;
    }
}