#include<bits/stdc++.h>
using namespace std;

void surviveIsland(int s, int n, int m){
    int x = s/7;
    int y = s - x;
    int sm = s*m;
    int days = sm/n;
    if(sm%n != 0) days++;
    if(days <= y) cout<<"Yes"<<days<<endl;
    else cout<<"No";
}