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

int lengthOfList(Node* head){
    if(head == NULL){
        return 0;
    }

    return 1 + lengthOfList(head->next);
}

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


void insertionMid(Node* &head,int pos,int val){
    if(pos == 0){
        insertionFront(head,val);
    }

    else if(pos >= lengthOfList(head) - 1){
        insertionEnd(head,val);
    }
    else{
        Node* temp = head;
        int count = 1;
        while(count <= pos-1 ){
            temp = temp->next;
            count++;
        }
        Node* insert = new Node(val);
        insert->next = temp->next;
        temp->next = insert;

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

    insertionMid(head,0,1);
    insertionMid(head,1,2);
    insertionMid(head,2,3);
    insertionMid(head,3,4);
    insertionMid(head,4,5);
    insertionMid(head,0,666);
    


    printLinkedlist(head);

    return 0;
}