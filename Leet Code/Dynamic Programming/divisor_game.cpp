#include<bits/stdc++.h>
using namespace std;

bool divisorGame(int n) {
    return divisorGame(n, false);   
}

bool divisorGame(int n, bool bob){
    if(n == 1 and bob) return true;

    for(int i=1;i<n;i++){
        if(n % i == 0){
            return (n-i, !bob);
        }
    }
    return false;
}