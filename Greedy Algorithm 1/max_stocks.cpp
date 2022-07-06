#include<bits/stdc++.h>
using namespace std;

int maxStocks(int price[], int n, int k){
    set<pair<int, int>> s;
    int sum = 0,day = 0;
    for(int i=0;i<n;i++)
        s.insert({price[i], i+1});
    for(auto i : s){
        sum += (i.first)*(i.second);
        if(sum <= k){
            k -= (i.first)*(i.second);
            day += (i.second + 1);
        }
        else{
            day += (k / i.first);
            k -= (i.first)*(k / i.first);
        }
    }
    cout<<day<<endl;
}