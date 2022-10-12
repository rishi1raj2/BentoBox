#include<iostream>
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;

    node (int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int start, int end, int curr){
    for(int i=start;i<=end; i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}


node* buildTree(int preorder[], int inorder[], int start, int end){
    static int idx=0;

    if(start>end){
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    node* naya = new node(curr);

    if(start== end){
        return naya;
    }
    int pos = search(inorder, start, end, curr);
    naya->left = buildTree(preorder, inorder, start, pos-1);
    naya->right = buildTree(preorder, inorder, pos+1, end);

    return naya;
}


void postorder(node* root){

    if(root== NULL){
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<< root->data << " " ;
    
}

int main(){
    int inorder[]={4,2,1,5,3};
    int preorder[]={1,2,4,3,5};

    node* root= buildTree(preorder, inorder,0 ,4 );
    postorder(root);

    return 0;
}