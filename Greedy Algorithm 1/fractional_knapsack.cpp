#include<bits/stdc++.h>
using namespace std;

double fractional(int val[], int w[], int W, int n){
    vector<pair<double, int>> v;
    for(int i=0;i<n;i++){
        double x = (val[i]*1.0)/(w[i]*1.0);
        v.push_back({x, i});
    }
    sort(v.begin(), v.end(), greater<pair<double, int>>());
    int s = 0;
    double ans = 0;
    for(int i=0;i<v.size();i++){
        if(s + w[v[i].second] < W){
            ans += val[v[i].second];
            s += w[v[i].second];
        }
        else{
            double x = (W - s)*1.0;
            ans += (x*v[i].first);
            break;
        }
    }
    return ans;
}