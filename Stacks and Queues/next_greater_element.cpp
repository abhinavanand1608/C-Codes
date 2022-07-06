#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    vector<int> ans;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=n-1 ; i>=0 ; i--){
        if(s.empty())
            ans.push_back(-1);
        else if(!s.empty() and s.top() > a[i])
            ans.push_back(s.top());
        else if(!s.empty() and s.top() <= a[i]){
            while(!s.empty() and s.top() <= a[i])
                s.pop();
            if(s.empty())
                ans.push_back(-1);
            else if(s.top() > a[i])
                ans.push_back(s.top());
        }
        s.push(a[i]);
    }
    reverse(ans.begin(), ans.end());
    for(auto it = ans.begin();it!=ans.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}