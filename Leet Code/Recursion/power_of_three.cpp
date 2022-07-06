#include<bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n) {
    if(n <= 0)
        return false;
    while(n != 0){
        if(n == 1)
            return true;
        if(n % 3 != 0)
            return false;
        else
            n /= 3;
    }
    return true;
}