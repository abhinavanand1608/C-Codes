#include<bits/stdc++.h>
using namespace std;

int main(){
    int lo = 0,hi = 1;
    string s;
    cin>>s;

    unordered_map<char,int> m;
    set<char> st;
    for(int i=0;i<s.length();i++) st.insert(s[i]);
    int n = st.size();
    int i=0;
    int j = 1;
    m[s[i]]++;
    int c=0;
    c++;
    int mi = INT_MAX;
    while(i<=j and j<s.length()){
        if(c<n){
            if(m[s[j]]==0) c++;
            m[s[j]]++;
            j++;
        }
        else if(c==n){
            mi = min(mi,j-i);
            if(m[s[i]]==1) c--;
            m[s[i]]--;
            i++;
        }
    }
    while(c==n){
        mi = min(mi,j-i);
        if(m[s[i]]==1) c--;
        m[s[i]]--;
        i++;
    }
    cout<<mi<<endl;
    
}