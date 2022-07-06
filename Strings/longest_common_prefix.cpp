#include<bits/stdc++.h>
using namespace std;

string LongestCommonPrefix(vector<string>& v){
    int mi = INT_MAX;

    if(v.size()==0) return "";

    string c = v[0];
    for(int i=1;i<v.size();i++){
        int j=0;int k=0;
        int a=0;
        while(j<c.size() and k<v[i].size()){
            if(c[j]==v[i][k]) a++;
            else break;
            j++;
            k++;
        }
        mi = min(mi,a);
    }
    return c.substr(0,mi);
}