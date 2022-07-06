#include<bits/stdc++.h>
using namespace std;

//Method 1
int minPlatforms(int arr[], int dep[], int n){
    int i,j,plat=1,result=1;
    i=0;
    for(i=0;i<n;i++){
        plat = 1;
        for(j=i+1;j<n;j++){
            if((arr[i] >= arr[j] && arr[i] <= dep[j]) || (arr[j] >= arr[i] && arr[j] <= dep[i]))
                plat++;
        }
        result = max(result,plat);
    }
    cout<<plat<<endl;
}

//Method 2
int findPlatform(int arr[], int dep[], int n){
    sort(arr,arr+n);
    sort(dep,dep+n); 
    int plat = 1,result = 1;
    int i=1,j=0;

    while(i < n && j < n){
        if(arr[i] <= dep[j]){
            plat++;
            j++;
        }

        else if(arr[i] > dep[j]){
            plat--;
            j++;
        }
        if(plat > result)
            result = plat;
    }
    return result;
}