#include<bits/stdc++.h>
using namespace std;

//Method 1
int main(){
    int n;
    cin>>n;
    int a[n];
    vector<int> p;

    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++){
        int prod = 1;
        for(int j=0;j<n;j++){
            if(i == j)
                continue;
            else
                prod = prod * a[j];
        }
        p.push_back(prod);
    }

    for(auto it = p.begin(); it != p.end(); it++)
        cout<<*it<<endl;
}

//Method 2
vector<long long int> productExceptSelf(vector<long long int>& nums, int n){
    vector<long long int> l(n),r(n);

    l[0] = 1;
    r[n-1] = 1;

    for(int i=1;i<n;i++)
        l[i] = l[i-1] * nums[i-1];
    
    for(int i=n-2;i>=0;i--)
        r[i] = r[i+1] * nums[i+1];
    
    for(int i=0;i<n;i++)
        nums[i] = l[i] * r[i];

    return nums;
}