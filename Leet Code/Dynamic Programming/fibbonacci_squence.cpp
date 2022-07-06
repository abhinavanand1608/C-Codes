#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n == 1 || n == 0)
        return n;
    else {
        return fib(n-2) + fib(n-1);
    }
}