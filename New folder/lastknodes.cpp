#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data= val;
        next= NULL;
    }
};

int lenght(node* head){
    int count=0;
    node* temp= head;
    while(temp->next!=NULL){
        count ++;

    }
    return count;
}

void lastknodes(node* &head,int l, int k){
    node* temp =head;
    while(temp->next!=(l-k+1)){

    }
}

int main(){

    
    
    return 0;

}