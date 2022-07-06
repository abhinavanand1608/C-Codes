#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,m,n;
    cin>>s>>n>>m;
    int x = s/7;
    int y = s-x;
    int total = s*m;
    int days = total/n;
    if(total % n != 0)
        days++;
    cout<<days<<endl;
}