#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,n=0;
    string s;
    stack<char> c;
    cin>>s;

    if(s.length() % 2)
        cout<<-1<<endl;
    else{
        for(int i=0;i<s.length();i++){
            if(s[i] == '}' && !c.empty()){
                if(c.top() == '{')
                    c.pop();
                else
                    c.push(s[i]);
            }
            else
                c.push(s[i]);
        }
        size = c.size();
        while(!c.empty() && c.top() == '{'){
            c.pop();
            n++;
        }
    }
    cout<<(size/2 + n%2)<<endl;
}