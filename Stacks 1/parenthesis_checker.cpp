#include<bits/stdc++.h>
using namespace std;

bool ispar(string x){
    stack<int> s;
    int l = x.length();
    for(int i=0;i<l;i++){
        if(x[i] == '{' || x[i] == '(' || x[i] == '['){
            s.push(x[i]);
            continue;
        }
        if(s.empty())
            return false;
        switch(x[i]){
            case '}':
                char ch = s.top();
                s.pop();
                if(ch == '(' || ch == '[')
                    return false;
                break;
            case ')':
                char ch = s.top();
                s.pop();
                if(ch == '{' || ch == '[')
                    return false;
                break;
            case ']':
                char ch = s.top();
                s.pop();
                if(ch == '{' || ch == '(')
                    return false;
                break;
        }
    }
    return s.empty();
}

