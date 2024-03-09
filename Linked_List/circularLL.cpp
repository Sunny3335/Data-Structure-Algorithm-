#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int value=this->data;
        if(this->next !=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory has been done "<<value <<endl;
    }
};

// inserting node in circular
void insertAtNode(Node* &tail, int element, int d){
    // empty list ho tb
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }else{
        // non empty list
        // assuming that the element is present in the list
        Node* curr=tail;

        while(curr->data!=element){
            curr=curr->next;
        }
        // element found hoga tb
        Node* temp=new Node(d);
        temp-> next=curr->next;
        curr->next=temp;
    }
}

void print(Node* tail){

    Node* temp=tail;
    // if LL is empty
    if(tail==NULL){
        cout<<"list is empty "<<endl;
        return;
    }


    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}

void deleteNode(Node* tail, int value){
    // empty list
    if(tail==NULL){
        cout<<"please check the list "<<endl;
    }else{
        // non empty list
        // assuming that the value is present in the list
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;
        // one node LL
        if(curr==prev){
            tail=NULL;
        }
        // >2 node LL
        else if(tail==curr){
            tail=prev;
        }

        curr->next=NULL;
        delete curr;
    }
}

bool isCircularList(Node* head){
    // empty list
    if(head==NULL){
        return true;
    }

    Node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    return false;
}


// checheed the cyclic loop in the LL

bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node* temp=head;
    while(temp!=NULL){
        // cycle is present
        if(visited[temp]==true){
            return 1;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}


// floyed checking

Node* floyedDetectLoop(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* slow=head;
    Node* fast=head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}


// detection of start of loop node

Node* setStartingNode(Node* head){
    if(head == NULL) {
        return NULL;
    }
    Node *loop_node = floyedDetectLoop(head);
    while(slow!=loop_node){
        slow=slow->next;
        loop_node=loop_node->next;
    }
    return slow;
}

// remove loop

void removeLoop(Node* head){
    if(head===NULL){
        return;
    }
    Node* startNode=setStartingNode(head);
    Node* temp=startNode;
    while(temp->next != startNode){
        temp=temp->next;
    }
    temp->next=NULL;

}
int main(){
    Node* tail=node1;
    Node* head=node1;

    // empty list me insert krte hai
    insertAtNode(tail,5,3);
    print(tail);

    insertAtNode(tail,3,5);
    print(tail);

    insertAtNode(head,5,54);
    // print(tail);
    insertAtNode(tail,54,3335);
    // print(tail);
    // insertAtNode(tail,3335,3435);
    // print(tail);

    /*insertAtNode(tail,3,345);
    print(tail);
    insertAtNode(tail,3435,54);
    print(tail);

    deleteNode(tail,3);
    print(tail);*/

    /* if(isCircularList(tail)){
        cout<<"LL is circular"<<endl;
    }else{
        cout<<"Not circular"<<endl;
    } */
    print(head);
    print(tail);
return 0;
}