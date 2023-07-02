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

Node *delLast(Node *head){
    if(head==NULL)
    return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node *curr =head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    delete curr->next;
    curr->next=NULL;
    return head;

}



int main(){
    Node *head=new Node(30);
    head->next=new Node(40);
    head->next->next=new Node(50);
    head->next->next->next=new Node(60);
     head->next->next->next->next=new Node(60);
    delLast(head);
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}