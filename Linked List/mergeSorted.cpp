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


Node* mergeSortedLinkedlist(Node* h1,Node* h2){
    if(h1 == NULL){
        return h2;
    }
    if(h2 == NULL){
        return h1;
    }
    Node* newHead = NULL;

    if(h1->data < h2->data){
        newHead = h1;
        newHead->next = mergeSortedLinkedlist(h1->next,h2);

    }
    else{
        newHead = h2;
        newHead->next = mergeSortedLinkedlist(h1,h2->next);
    }
    return newHead;
}


int main(){

    Node* h1 = NULL;
    Node* h2 = NULL;

    Node* head = NULL;

    insertionEnd(h1,1);
    insertionEnd(h1,4);
    insertionEnd(h1,7);
    insertionEnd(h1,12);

    printLinkedlist(h1);

    insertionEnd(h2,2);
    insertionEnd(h2,3);
    insertionEnd(h2,5);
    insertionEnd(h2,9);
    insertionEnd(h2,10);

    printLinkedlist(h2);

    head = mergeSortedLinkedlist(h1,h2);
    
    printLinkedlist(head);
   

    return 0;
}