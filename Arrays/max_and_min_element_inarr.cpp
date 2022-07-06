//Method 1:-
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int max,min;
    if(n==1) {
        max=a[0];
        min=a[0];
    }
    else{
        if(a[0] > a[1]){            //  no of comparisons = 2*(n-2) + 1
            max = a[0];
            min = a[1];
        }
        else{
            max = a[1];
            min = a[0];
        }
        for(int i=2;i<n;i++){
            if(a[i] > max){
                max = a[i];
            }
            if(a[i] < min){
                min = a[i];
            }
        }
    }
    cout<<"Maximum value = "<<max<<endl;
    cout<<"Minimum value = "<<min;
}

//Method-2
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int max,min;
    int i;

    if(n%2 == 0){
        if(a[0] > a[1]){
            max=a[0];
            min=a[1];
        }
        else{
            max=a[1];
            min=a[0];
        }
        i=2;
    }
    else{
        max=a[0];
        min=a[0];
        i=1;
    }                                   //odd = 3*(n-1)/2         even = 1 + 3*(n-2)/2 = 7
    while(i<n-1){
        if(a[i] > a[i+1]){
            if(a[i] > max){
                max=a[i];
            }
            if(a[i+1]<min){
                min=a[i+1];
            }
        }
        else{
            if(a[i+1] > max){
                max=a[i+1];
            }
            if(a[i]<min){
                min=a[i];
            }
        }
        i = i+2;
    }
    cout<<"Maximum Value is "<<max<<endl;
    cout<<"Minimum Value is "<<min;
}