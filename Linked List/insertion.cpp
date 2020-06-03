#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int d){
            data = d;
            next = NULL;
        }
};

int lengthLinkedlist(Node* head){
    if(head == NULL){
        return 0;
    }

    return lengthLinkedlist(head->next) + 1;
}

void insertionFront(Node* &head,int data){
    if(head == NULL){
        head = new Node(data);
        return;
    }

    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}


void insertionEnd(Node* &head,int data){
    if(head == NULL){
        head = new Node(data);
        return;
    }
    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }

    temp->next = new Node(data);
}

void insertionMid(Node* &head,int data,int pos){
    if(pos == 0){
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
        return;
    }
    else if(pos >= lengthLinkedlist(head) - 1){
        Node* temp = new Node(data);
        Node* last = head;
        while(last->next){
            last = last->next;
        }
        last->next = new Node(data);
    }
    else{
        int count = 1;
        Node* temp = head;
        while(count <= pos - 1){
            temp = temp->next;
        }
        Node* n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void printLinkedlist(Node* head){
    if(head == NULL){
        return;
    }
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}


int main(){

    Node* head = NULL;
    insertionEnd(head,6);
    insertionEnd(head,2);
    insertionEnd(head,3);
    insertionEnd(head,7);

    insertionFront(head,1);
    insertionMid(head,5,1);

    printLinkedlist(head);


    return 0;
}