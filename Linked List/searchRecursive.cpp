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

Node* searchRecursive(Node* head,int key){

    if(head == NULL){
        return head;
    }

    if(head->data == key){
        return head;
    }
    return searchRecursive(head->next,key);
}

int main(){

    Node* head = NULL;

    insertionEnd(head,2);
    insertionEnd(head,4);
    insertionEnd(head,6);
    insertionEnd(head,14);
    insertionEnd(head,15);
    insertionEnd(head,21);

    Node* ans = searchRecursive(head,2);
    if(ans != NULL){
        cout<<"Node Found"<<endl;
    }
    else{
        cout<<"Node not found"<<endl;
    }

    return 0;
}