#include<bits/stdc++.h>
using namespace std;

double multiply(double mid, int n){
    double ans = 1.0;
    for(int i=1;i<=n;i++){
        ans = ans * mid;
    }
    return ans;
}


double getNthroot(int n, int m){
    double l = 1;
    double h = m;
    double eps = 1e-6;

    while((h-l)>eps){
        double mid = l + h/2.0;
        if(multiply(mid, n) < m)
            l = mid;
        else
            h = mid;
    }
    cout<<l<<" "<<h<<endl;
    cout<<pow(m, (double)(1.0/(double)n));//checking
}

int main(){
    int n,m;
    double ans = getNthroot(n,m);
}