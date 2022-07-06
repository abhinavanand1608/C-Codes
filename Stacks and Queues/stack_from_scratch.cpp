#include<bits/stdc++.h>
using namespace std;

int top = -1;
int st[10];

void push(int n){
    if(top == 9)
        cout<<"Overflow"<<endl;
    else{
        top++;
        st[top] = n;
    }
}

void pop(){
    if(top == -1){
        cout<<"Underflow"<<endl;
    }
    else{
        int item = st[top];
        top--;
        cout<<item<<endl;
    }
}

void display(){
    for(int i=top;i>=0;i--){
        cout<<st[i]<<" ";
    }
}