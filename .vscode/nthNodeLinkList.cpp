#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printNthEnd(Node *head,int n){
    if(head==NULL)return;
    Node *first=head;
    for(int i=0;i<n;i++){
        if(first==NULL)return;
        first=first->next;
    }


    Node *second =head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    cout<<(second->data)<<endl;
}


int main(){
    Node *head=new Node(30);
    head->next=new Node(40);
    head->next->next=new Node(50);
    head->next->next->next=new Node(60);
     head->next->next->next->next=new Node(60);
    printNthEnd(head,3);
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}