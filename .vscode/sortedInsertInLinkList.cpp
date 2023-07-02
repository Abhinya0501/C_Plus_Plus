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



Node *sortedInsert(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        return temp;
    
    }

if(x<head->data){
    temp->next=head;
    return temp;
}



Node *curr=head;
while(curr->next!=NULL&&(curr->next->data)<(x)){
    curr=curr->next;
}

temp->next=curr->next;
curr->next=temp;
return head;

}





int main(){
    Node *head=new Node(30);
    head->next=new Node(40);
    head->next->next=new Node(50);
    head->next->next->next=new Node(60);
     head->next->next->next->next=new Node(60);
    sortedInsert(head,80);
    Node *cur = head;
    while(cur!=NULL){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
}