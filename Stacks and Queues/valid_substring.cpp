#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> chararray;
    stack<int> index;

    index.push(-1);
    int Max = 0;

    for(int i=0;i<s.length();i++){
        if(s[i] == '('){
            index.push(i);
            chararray.push(s[i]);
        }
        else{
            if(!chararray.empty() and chararray.top() == '('){
                index.pop();
                chararray.pop();
                Max = max(Max, i-index.top());
            }
        }
    }
    cout<<Max<<endl;
}