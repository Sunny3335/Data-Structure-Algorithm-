#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

// insert at head
void insertAtHead(Node* &head, int d){
    // create a new node
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
    temp=NULL;
}

// print the node
void printNode(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

// insert at tail
void insertAtTail(Node* &tail, int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
    temp=NULL;

}

// insert at position
void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    // insert at head
    if(position==1){
        insertAtHead(head,d);
        return;
    }

    // at middle
    Node* temp=head;
    int cnt=1;
    if(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    // insert at last position
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;

    }

    // create a new node
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

int main(){
    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head=node1;
    Node* tail=node1;

    insertAtHead(head, 2);
    printNode(head);

    insertAtHead(head, 5);
    printNode(head);

    insertAtTail(tail, 20);
    printNode(head);


    insertAtTail(tail, 30);
    printNode(head);


    // insertAtHead(head,5);
    // printNode(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    insertAtPosition(tail,head,6,25);
    printNode(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;


return 0;
}