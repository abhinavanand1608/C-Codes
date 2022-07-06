#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> st;

    for(int i=0;i<s.length();i++){
        if(s[i] == ')'){
            if(st.top() == '('){
                cout<<"True"<<endl;
                break;
            }
            else{
                while(st.top() != '(')
                    st.pop();
                st.pop();
            }
        }
        else{
            st.push(s[i]);
        }
    }
    if(st.empty())
        cout<<"False"<<endl;
    else   
        cout<<"True"<<endl;
}