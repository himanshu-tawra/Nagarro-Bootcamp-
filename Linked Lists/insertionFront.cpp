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

void insertionFront(Node* &head,int val){
    if(head == NULL){
        head = new Node(val);
    }
    else{
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
    }
}

void printLinkedlist(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}


int main(){

    Node* head = NULL;

    insertionFront(head,5);
    insertionFront(head,4);
    insertionFront(head,3);
    insertionFront(head,2);
    insertionFront(head,1);

    printLinkedlist(head);

    return 0;
}