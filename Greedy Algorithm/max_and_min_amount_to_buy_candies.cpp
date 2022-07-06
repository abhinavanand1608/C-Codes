#include<bits/stdc++.h>
using namespace std;

vector<int> candyStore(int n, int k, int candies[]){
    sort(candies,candies+n);
    int ma = 0;
    int mi = 0;
    int i=0;
    int j=n-1;
    while(i<=j){
        mi += candies[i];
        i++;
        j -= k;
    }

    reverse(candies,candies+n);
    i=0;
    j=n-1;
    while(i<=j){
        ma += candies[i];
        i++;
        j -= k;
    }
    return {mi,ma};
}