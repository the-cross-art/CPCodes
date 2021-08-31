#include <bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head,int data){
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(node* &head,int data){
    node* temp1 = new node(data);
    if(head == NULL){
        head = temp1;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = temp1;
}

void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deleteAtTail(node* &head,int val){
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    else if(head->next == NULL){
        cout<<"List is now empty"<<endl;
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data != val){
        temp = temp ->next;
    }
    node* todelete = temp -> next;
    temp -> next = temp -> next -> next;
    delete todelete;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int length(node *head){

    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* kappend(node* &head, int k){

    node* newHead;
    node* newTail;
    node* tail=head;

    int l = length(head);
    k = k%l;
    int count=1;

    while(tail->next!=NULL){
        if(count==l-k){
            newTail=tail;
        }
        if(count==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }

    newTail->next=NULL;
    tail->next=head;

    return newHead;
}

int main(){

    node* head=NULL;

    int arr[]={1,2,3,4,5,6};
    for (int i = 0; i < 6; i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);

    node* newHead = kappend(head,3);
    display(newHead);
    display(head);
};