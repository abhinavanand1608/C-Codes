#include<bits/stdc++.h>
using namespace std;

int main(){
    int count0=0,count1=0,cnt=0;
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[i] == '0')
            count0++;
        else if(s[i] == '1')
            count1++;
        if(count0 == count1)
            cnt++;
    }
    if(count0 == count1)
        cout<<cnt<<endl;
    else
        cout<<"-1"<<endl;
}