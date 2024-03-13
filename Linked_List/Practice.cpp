#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // destructor
    ~Node(){
        int value=this->data;
        // memory free
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout << "memory is freed for the value " << value << endl;
    }
};

// insertion
void insertAtHead(Node *&Head, int num)
{
    Node *temp = new Node(num);
    temp->next = Head;
    Head = temp;
    // to remove the temp;
    temp = NULL;
}

// insert at tail

void insertAtTail(Node *&Tail, int key)
{
    Node *temp = new Node(key);
    Tail->next = temp;
    Tail =temp;
    temp = NULL;
}

// insert at middle at any point
void insertAtPosition(Node* &Head, Node* &Tail, int d, int position){
    // handle the head position
    if(position==1){
        insertAtHead(Head, d);
        return;
    }
    Node *temp = Head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    // handle the tail position
    if(temp->next==NULL){
        insertAtTail(Tail, d);
        return;
    }

    Node *nodeToInserted = new Node(d);
    nodeToInserted->next=temp->next;
    temp->next=nodeToInserted;
}

// print the node
void printNode(Node *&Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// deleting the node
void deleteNode(Node* & Head, int position){
    if(position==1){
        Node *temp = Head;
        Head = Head->next;
        // delete node
        temp->next = NULL;
        delete temp;
    }
    else{
        // deleting the last and middle element
        Node *curr = Head;
        Node *prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev -> next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node* Head = new Node(10);
    Node *Tail = Head;
    // Node *Tail = new Node(50);

    // printNode(Head);
    insertAtTail(Tail, 20);
    insertAtTail(Tail, 30);
    insertAtPosition(Head,Tail, 40, 3);
    insertAtPosition(Head,Tail, 50, 1);
    insertAtPosition(Head,Tail, 60, 6);
    deleteNode(Head, 4);
    printNode(Head);
    // printNode(Tail);

    // cout<<"Head data "<<Head->data<<endl;
    // cout<<"Tail data "<<Tail->data<<endl;




    return 0;
}