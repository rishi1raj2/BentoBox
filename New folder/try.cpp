#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data=val;
        left= NULL;
        right= NULL;
    }
};

int nono(node* root){
    if(root== NULL){
        return 0;
    }
    return nono(root->left) + nono(root->right) + 1;
}

int sumrecurion(node* root){
    if(root==NULL){
        return 0;
    }
    return sumrecurion(root->left)+ sumrecurion(root->right)+ root->data;
}

int numberofnodes(node* root){
    if(root== NULL){
        return 0;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int count =0;
    while(!q.empty()){
        node* node= q.front();
        q.pop();
        if(node!= NULL){
            count+=1;
            if(node->left){
                q.push(node->left);
            }if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);

         }
    }
    return count;
}

int main(){
    node* root= new node(1);
    root->left= new node(2);
    root->right= new node(3);
    root->left->left= new node(4);
    root->left->right =new node(5);
    root->left->left->left= new node(10);
    root->right->left= new node(6);
    root->right->right= new node(7);


    cout<< nono(root) ;
    cout<< sumrecurion(root);
    return 0;
}