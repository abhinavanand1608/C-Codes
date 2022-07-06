#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s){
    reverse(s.begin(), s.end());
}

int main(){
    vector<char> v = {"h","e","l","l","o"};
    reverseString(v);
    for(auto it = v.begin();it != v.end();it++)
        cout<<*it;
    cout<<endl;
}