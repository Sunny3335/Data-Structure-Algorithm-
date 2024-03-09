#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    // destructor
    ~Node(){
        int value=this->data;
        // memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;

        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void InsertAtHead(Node* &head, int d){
    // Node* &head here we are making the reference because i dont want to make copy I only want to do update in the original linkedlist.

    // new node creation
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail,int d){
     // new node creation
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

// printing LL
void Print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void InsertAtMiddle(Node* &tail, Node* &head, int position, int d){
    // insert at start
    if(position==1){
        InsertAtHead(head,d);
        return;
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    // insert at last position
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }

    //creating a node for data d

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

// deletion of node
void deleteNode(int position, Node* &head,Node* &tail){
    // deleting first or start node
    if(position == 1) {
        Node* temp=head;
        head = head->next;

        //memory free start node
        temp->next=NULL;
        delete temp;
    }else{
        // deleting the any middle or last node
        Node* curr=head; // creating curr node pointer
        Node* prev=NULL; // creating prev node pointer
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        if(curr->next==NULL){
            Node* temp=tail;
            tail=prev;
            prev->next=NULL;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

}

int main(){
    // creating a new node then constructor will be called
    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    Print(head);

    // these are all for the insertion at head
    /* InsertAtHead(head, 20);
    Print(head);

    InsertAtHead(head, 4);
    Print(head); */


    // these are all for the insertion at Tail
    InsertAtTail(tail, 20);
    Print(head);

    InsertAtTail(tail, 4);
    Print(head);

    InsertAtMiddle(tail, head, 4, 88);
    Print(head);

    cout<<"Head data "<<head->data<<endl;
    cout<<"Tail data "<<tail->data<<endl;

    deleteNode(4,head,tail);
    Print(head);

    cout<<"Head data "<<head->data<<endl;
    cout<<"Tail data "<<tail->data<<endl;

    /* deleteNode(3,head);
    Print(head);
    deleteNode(2,head);
    Print(head); */

return 0;
}
