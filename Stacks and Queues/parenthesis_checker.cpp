#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    char a;
    cin>>s;
    int l = s.length();
    stack<char> st;

    for(int i=0;i<l;i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
    }

    for(int i=0;i<l;i++){
        switch(s[i]){
            case '}':
                a = st.top();
                st.pop();

                if(a == '(' || a == '[')
                    break;
                break;
            
            case ')':
                a = st.top();
                st.pop();

                if(a == '{' || a == '[')
                    break;
                break;

            case ']':
                a = st.top();
                st.pop();

                if(a == '(' || a == '{')
                    break;
                break;
        }
    }
    if(st.empty())
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
}