#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    unordered_map<string,int> m;
    string s;
    string arr[] = {"aaa", "bbb", "ccc", "bbb", "aaa", "aaa"};
    for(int i=0;i<6;i++){
        m[arr[i]]++;
    }
    int first_max = INT_MIN, sec_max = INT_MIN;
    for(auto it = m.begin();it!=m.end();it++){
        if(it->second > first_max){
            sec_max = first_max;
            first_max = it->second;
        }
        else if(it->second > sec_max && it->second != first_max)
            sec_max = it->second;
    }

    for(auto it = m.begin();it!=m.end();it++){
        if(it->second == sec_max)
            cout<<it->first;
    }
}