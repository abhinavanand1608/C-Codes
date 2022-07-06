#include<bits/stdc++.h>
using namespace std;

//Method 1
// int main(){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     int ans = 0;
//     int open = 0,close = 0;
//     int fault = 0;
//     for(int i=0;i<=n;i++){
//         if(s[i]==']'){
//             close++;
//             fault = close-open;
//         }
//         else{
//             open++;
//             if(fault>0){
//                 ans+=fault;
//                 fault--;
//             }
//         }
//     }
//     cout<<ans<<endl;
// }

//Method 2

int main(){
    string s;
    cin>>s;
    vector<int> v;
    for(int i=0;i<s.length()-1;i++)
        if(s[i] == '[') v.push_back(i);
    int idx = 0;
    int ans = 0;
    int count = 0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i] == '['){
            count++;
            idx++;
        }
        else{
            count--;
            if(count < 0){
                ans += v[idx] - i;
                swap(s[i],s[v[idx]]);
                count = 1;
                idx++;
            }
        }
    }
    cout<<ans<<endl;
}