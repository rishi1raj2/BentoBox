#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left=NULL;
        right= NULL;
    }
};

int search (int inorder[],int start,int end, int curr){
    for(int i=start; i<=end; i++){
        if(inorder[i]==curr){
            return i;
        }
    }return -1;
}
node* buildTree(int postorder[],int inorder[],int start, int end){
    static int idx= 4;
    if(start>end){
        return NULL;
    }
    int curr= postorder[idx];
    idx--;
    node* naya= new node(curr);

    if(start==end){
        return naya;
    }

    int pos= search(inorder, start, end , curr);
    
    naya->right= buildTree(postorder, inorder, pos+1, end);
    naya->left= buildTree(postorder, inorder, start, pos-1);
    return naya;
}
void postorderp(node* root){

    if(root== NULL){
        return ;
    }

    postorderp(root->left);
    postorderp(root->right);
    cout<< root->data << " " ;
    
}
int main(){
    int inorder[]={4,2,1,5,3};
    int postorder[]={1,2,4,3,5};

    node* root= buildTree(postorder, inorder,0 ,4 );

    postorderp(root);

    return 0;
}