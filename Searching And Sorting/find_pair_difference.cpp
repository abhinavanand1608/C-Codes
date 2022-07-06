#include<bits/stdc++.h>
using namespace std;

// int main(){
//     //Method 1
//     int l,n;
//     cin>>l>>n;
//     int a[l];

//     for(int i=0;i<l;i++) cin>>a[i];

//     unordered_map<int,int> m;
//     int f = -1;
//     for(int i=0;i<l;i++) m[a[i]] = 1;
//     for(int i=0;i<l;i++){
//         if(m[a[i]+n]){
//             f = 1;
//             break;
//         }
//     }
//     cout<<f<<endl;
// }

int main(){
    //Method 2
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];

        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int f = -1;
        for(int i=0;i<n;i++){
            int idx = upper_bound(a+i+1,a+n,x+a[i]) - a - 1;
            if(a[idx] - a[i] == x){
                f = 1;
                break;
            }
        }
        cout<<f<<endl;
    }
}