#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {7, 10, 4, 20, 15};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr,arr+n);

    cout<<arr[k-1]<<endl;
}