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

void insertionEnd(Node* &head,int val){
    Node* ptr = head;
    if(head == NULL){
        head = new Node(val);
    }
    else{
        Node* temp = new Node(val);
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
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

    insertionEnd(head,1);
    insertionEnd(head,2);
    insertionEnd(head,3);
    insertionEnd(head,4);
    insertionEnd(head,5);    

    printLinkedlist(head);

    return 0;
}