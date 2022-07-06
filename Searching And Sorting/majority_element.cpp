#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++) cin>>a[i];

    int ma = a[0];
    int cnt = 1;
    for(int i=1;i<n;i++){
        if(a[i]==ma) cnt++;
        else cnt--;
        if(cnt == 0){
            ma = a[i];
            cnt = 1;
        }
    }
    int c = 0;
    for(int i=0;i<n;i++)
        if(a[i] == ma) c++;
    if(c > n/2) cout<<ma<<endl;
    else cout<<-1<<endl;
}