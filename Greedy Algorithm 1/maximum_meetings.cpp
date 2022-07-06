#include<bits/stdc++.h>
using namespace std;

static bool comp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}


vector<int> maxMeetings(int s[], int f[], int n){
    vector<int> ans;
    vector<pair<int, int>> v;
    for(int i=0;i<n;i++) v.push_back({s[i], f[i]});
    sort(v.begin(), v.end(), comp);
    int i=0;
    int j=1;
    int c=1;
    while(j < n){
        if(v[i].second < v[j].first){
            ans.push_back(v[i].first);
            c++;
            i = j;
            j++;
        }
        else
            j++;
    }
    return ans;
}