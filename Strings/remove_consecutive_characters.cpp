#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_map<char,int> m;

    for(int i=0;i<s.length();i++)
        m[s[i]]++;
    for(auto it = m.begin(); it!= m.end(); it++)
        cout<<it->first;
    cout<<endl;
}