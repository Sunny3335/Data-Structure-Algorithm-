#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory free ho gya "<<val<<endl;
    }
};

// print node (traversing the LL)
void Print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// length of node
int getLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail, int d){
    // empty list
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }else{
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;

    }

}

void insertAtTail(Node* &tail, Node* &head, int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }else{
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

// Insertion at the middle node

void InsertAtMiddle(Node* &tail, Node* &head, int position, int d){
    // insert at start
    if(position==1){
        insertAtHead(head,tail,d);
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
        insertAtTail(tail,head,d);
        return;
    }

    //creating a node for data d

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;

}

// deletion of node
void deleteNode(int position, Node* &head,Node* &tail){
    // deleting first or start node
    if(position == 1) {
        Node* temp=head;
        temp->next->prev=NULL;
        head = temp->next;

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
            prev->next->prev=NULL;
        }

        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

}


int main(){
    Node* node1=new Node(23);
    Node* head=node1;
    Node* tail=node1;
    Print(head);
    // cout<<getLength(head)<<endl;

    insertAtHead(head,tail, 55);
    Print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtHead(head,tail, 35);
    Print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtHead(head, tail,15);
    Print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtTail(tail,head,33);
    Print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    InsertAtMiddle(tail, head,3,100);
    Print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    InsertAtMiddle(tail, head,1,150);
    Print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    InsertAtMiddle(tail, head,7,130);
    Print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    Print(head);

    deleteNode(8,head,tail);
    Print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;


return 0;
}