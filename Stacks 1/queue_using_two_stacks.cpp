#include<bits/stdc++.h>
using namespace std;

int pop(stack<int> s1, stack<int> s2){
    s1.pop();
}

void push(stack<int> s1, stack<int> s2, int num){
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(num);
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
}

int pop1(stack<int> input, stack<int> output){
    if(!output.empty())
        return output.top();
    else{
        while(!input.empty()){
            output.push(input.top());
            input.pop();
        }
        return output.top();
    }
}

void push1(stack<int> input, stack<int> output, int num1){
    input.push(num1);
}