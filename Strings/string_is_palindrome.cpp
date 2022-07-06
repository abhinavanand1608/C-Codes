#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 0;
    string s;
    cin>>s;
    for(i=0;i<s.length()/2;i++){
        if(s[i] != s[s.length()-1-i]){
            cout<<"Not a Palindrome"<<endl;
            break;
        }
    }
    if(i == s.length()/2)
        cout<<"Palindrome"<<endl;
}