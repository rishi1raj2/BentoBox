#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};

void printlo(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* Node= q.front();
        q.pop();
        if(Node!=NULL){
            cout<<Node->data<<" ";
            if(Node->left){
                q.push(Node->left);
            }
            if(Node->right){
                q.push(Node->right);
            }
        }else if(!q.empty()){
            q.push(NULL);
        }
    }
}
int main(){
    Node* root= new Node(1);
    root->left =new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right =new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);

    printlo(root);
}