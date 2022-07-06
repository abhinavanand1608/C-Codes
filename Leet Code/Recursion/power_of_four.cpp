#include<bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n) {
    if(n <= 0)
        return false;
    while(n != 0){
        if(n == 1)
            return true;
        if(n % 4 != 0)
            return false;
        else
            n /= 4;
    }
    return true;        
}