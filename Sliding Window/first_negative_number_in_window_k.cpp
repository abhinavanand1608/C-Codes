#include<bits/stdc++.h>
using namespace std;

vector<int> firstneg(int arr[], int n, int k){
    vector<int> ans;
    queue<int> q;

    int i=0,j=0;
    while(j<n-1){
        if(j-i+1 < k){
            if(arr[j] < 0)
                q.push(arr[j]);
            j++;
        }
        else if(j-i+1 == k){
            if(q.empty())
                ans.push_back(0);
            else{
                int x = q.front();
                ans.push_back(x);
                if(arr[i] == q.front())
                    q.pop();
            }
        }
        i++;
        j++;
    }
}