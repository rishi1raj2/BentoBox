#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node (int val){
        data= val;
        next= NULL;
    }

};

void insertatend(node* &head, int val){
    node* n= new node(val);
    
    if(head==NULL){
        head= n;
        return;
    }
    
    node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!= NULL){
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head= NULL;
    insertatend(head, 1);
    insertatend(head, 3);
    insertatend(head, 5);
    display(head);
    return 0;
}