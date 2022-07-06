#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

int ans = 0;
queue<Node*> q;
int maxLevelSum(Node* root){
    if(!root) return 0;
    q.push(root);
    int ans = root->data;
    while(!q.empty()){
        int count = q.size();
 
        int sum = 0;
        while (count--)
        {
            
            Node* temp = q.front();
            q.pop();
 
           
            sum = sum + temp->data;
 
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
        ans = max(ans,sum);
    }
    return ans;
}