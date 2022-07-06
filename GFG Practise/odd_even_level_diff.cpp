#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};


queue<Node*> q;

int getLevelDiff(Node *root)
{
    if(!root) return 0;
    q.push(root);
    int level = 0;
    int evenSum = 0, oddSum = 0;

    while(!q.empty()){
        int count = q.size();
        level++;

        while(count--){
            Node* temp = q.front();
            q.pop();
            if(level % 2 == 0)
                evenSum += temp->data;
            else if(level % 2 != 0)
                oddSum += temp->data;
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
    return oddSum - evenSum;
}