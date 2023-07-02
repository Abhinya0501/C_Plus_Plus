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

Node *insertPos(Node *head,int pos , int data){

Node *temp=new Node(data);
if(pos==1){
    temp->next=head;
    return temp;
}
Node *curr = head;
for(int i=1;i<=pos-2&&curr!=NULL;i++){
    curr=curr->next;
}
if(curr==NULL)
return head;
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
    insertPos(head,4,80);
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}