#include<bits/stdc++.h>
using namespace std;

int st[100];
int top1 = 0;
int top2 = 99;

void push1(int n){
    top1++;
    st[top1] = n;
    if(top1+1 == top2)
        cout<<"Over=flow"<<endl;
}

void push2(int n){
    top2--;
    st[top2] = n;
    if(top2-1 == top1)
        cout<<"Over-flow"<<endl;
}

void pop1(){
    int item = st[top1];
    top1--;
    cout<<item<<endl;
}

void pop2(){
    int item = st[top2];
    top2++;
    cout<<item<<endl;
}