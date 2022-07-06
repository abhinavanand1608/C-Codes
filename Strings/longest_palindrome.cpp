#include<bits/stdc++.h>
using namespace std;

void PrintString(string s,int start,int end){
    for(int i=start;i<=end;i++)
        cout<<s[i];
}

void LongestPal(string s){
    int l,h;
    int start=0,end=1;
    for(int i=1;i<s.length();i++){
        //even substring

        l=i-1;
        h=i;

        while(l>=0 && h<s.length() && s[l]==s[h]){
            if(h-l+1>end){
                start = l;
                end = h-l+1;
            }
            l--;
            h++;
        }
        //odd substring

        l=i-1;
        h=i+1;

        while(l>=0 && h<s.length() && s[l]==s[h]){
            if(h-l+1>end){
                start = l;
                end = h-l+1;
            }
            l--;
            h++;
        }
    }
    PrintString(s,start,start+end-1);
}

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        LongestPal(s);
        cout<<endl;
    }
}