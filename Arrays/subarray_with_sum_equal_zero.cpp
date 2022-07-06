#include<bits/stdc++.h>
using namespace std;

int main(){
    //Method 1
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int s = 0;
    int f = 0;
    unordered_map<int,int> m;
    for(int i=1;i<=n;i++){
        s = s + arr[i];
        if(s==0 or m[s] or arr[i] == 0){
            f = 1;
            break;
        }
        else
            m[s] = 1;
    }
    if(f == 1)
        cout<<"Yes"<<endl;
    else
        cout<<"-1"<<endl;

}

//Method 2
int maxLen(int A[], int n){
    unordered_map<int,int> mpp;
    int maxi = 0;
    int sum = 0;

    for(int i=0;i<n;i++){
        sum += A[i];
        if(sum == 0)
            maxi = i+1;
        else{
            if(mpp.find(sum) != mpp.end())
                maxi = max(maxi, i - mpp[sum]);
            else
                mpp[sum] = i;
        }
    }
    return maxi;
}