#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.length();i++){
        if(i&1 and s[i]=='0') a++;
        if(i%2==0 and s[i]=='1') a++;
        if(i&1 and s[i]=='1') b++;
        if(i%2==0 and s[i]=='0') b++;
    }
    cout<<min(a,b)<<endl;
}