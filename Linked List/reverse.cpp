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

void reverseLinkedlist(Node* &head){
    if(head == NULL || head->next == NULL){
        return;
    }
    Node* prev = NULL;
    Node* current = head;
    while(current){
        Node* nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    head = prev;
}



int main(){

    Node* head = NULL;

    for(int i = 0; i < 5; i++){
        insertionEnd(head,i);
    }

    printLinkedlist(head);

    reverseLinkedlist(head);

    printLinkedlist(head);



    return 0;
}