#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    int a[n],nums[n];

    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++)
        nums[i] = a[i];

    sort(nums,nums+n);

    for(int i=0;i<n/2;i++){
        if(nums[i] != a[i])
            cnt++;
    }
    cout<<cnt<<endl;
}

int minSwaps(int arr[], int n){
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++) v[i] = {arr[i], i};
    sort(v.begin(),v.end());
    int c=0;
    for(int i=0;i<n;i++){
        if(v[i].second == i) continue;
        else{
            c++;
            swap(v[i],v[v[i].second]);
            i--;
        }
    }
    return c;
}