#include<bits/stdc++.h>
using namespace std;

int getTour(int petrol[], int distance[], int n){
    int sum=0,start=0,diff=0;
    for(int i=0;i<n;i++){
        sum += petrol[i]-distance[i];

        if(sum<0){
            start = i+1;
            diff += sum;
            sum = 0;
        }
    }
    return sum+diff>=0? start:-1;
}