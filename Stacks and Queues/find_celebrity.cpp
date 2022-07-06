#include<bits/stdc++.h>
using namespace std;

void celebrityProblem(int a[], int n){
    stack<int> s;
    for(int i=0;i<n;i++)
        s.push(i);
    
    while(s.size() >= 2){
        int i = s.pop();
        int j = s.pop();

        if(a[i][j] == 1)
            s.push(j);
        else
            s.push(i);
    }
    int pot = s.pop();
    for(int i=0;i<n;i++){
        if(i == pot){
            if(a[i][pot] == 0 || a[pot][i] == 1)
                cout<<"None"<<endl;
        }
    }
    cout<<pot<<endl;
}

int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    celebrityProblem(a, n);
}