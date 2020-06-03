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

Node* search(Node* head,int key){

    while(head){
        if(head->data == key){
            return head;
        }
        head = head->next;
    }
    return NULL;
}

int main(){

    Node* head = NULL;

    insertionEnd(head,2);
    insertionEnd(head,4);
    insertionEnd(head,6);
    insertionEnd(head,14);
    insertionEnd(head,15);
    insertionEnd(head,2);

    Node* ans = search(head,2);
    if(ans != NULL){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Eement not found"<<endl;
    }

    return 0;
}