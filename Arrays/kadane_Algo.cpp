#include<bits/stdc++.h>
using namespace std;

int main(){
    //O(n) Solution
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<=n;i++) cin>>a[i];

    int max = INT_MIN;
    int max_th = 0;

    for(int i=1;i<=n;i++){
        max_th = max_th + a[i];
        if(max_th>max)
            max = max_th;
        if(max_th<0)
            max_th=0;
    }
    cout<<max<<endl;
}

//O(n^2) Solution
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];

    int pre[n+1];
    pre[0] = 0;
    for(int i=1;i<=n;i++)
        pre[i] = pre[i-1] + a[i];
    int max = INT_MIN;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            int s = pre[j] - pre[i-1];
            if(s>max)
                max = s;
        }
    }
    cout<<max<<endl;
}

//O(n^3) Solution

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];

    int max=INT_MIN;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int s=0;
            for(int k=i;k<=j;k++)
                s+=a[k];
            if(s>max)
                max=s;
        }
    }
    cout<<max<<endl;
}