#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

int numComponents(Node* head, vector<int> &nums){
    unordered_set<int> s;
    for(int i=0;i<nums.size();i++) s.insert(nums[i]);
    int c = 0, f = 0;
    while(head != NULL){
        if(s.find(head->data) != s.end()){
            if(!f)
                f = 1;
            else{
                if(f){
                    c++;
                    f = 0;
                }
            }
            head = head->next;
        }
        if(f)
            c++;
        return c;
    }
}