#include<bits/stdc++.h>
using namespace std;

//Method 1
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    while(a < b){
        a += c;
        if(a == b)
            break;
    }
    if(a == b)
        cout<<1<<endl;
    else
        cout<<0<<endl;
}

//Method 2
int inSequence(int a, int b, int c){
    if(c==0){
        if(a==b)
            return 1;
        else
            return 0;
    }
    else{
        if((b-a)/c < 0)
            return 0;
        else{
            if((b-a)%c == 0)
                return 1;
            else
                return 0;
        }
    }
}