#include<bits/stdc++.h>
using namespace std;

void insert_at_bottom(char x){
    stack<char> s;
    if(s.empty())
        s.push(x);
    else{
        char a = s.top();
        s.pop();
        insert_at_bottom(a);
        s.push(a);
    }
}