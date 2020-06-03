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

void deletionFront(Node* &head){
    if(head == NULL){
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteEnd(Node* &head){
    if(head == NULL){
        return;
    }
    else if(head->next == NULL){
        delete head;
        head = NULL;
    }
    else{
        Node* temp = head;
        while(temp->next->next){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }

}

void deleteMid(Node* &head,int pos){
    if(pos == 0){
        deletionFront(head);
        return;
    }
    else if(pos >= lengthLinkedlist(head) - 1){
        deleteEnd(head);
        return;
    }
    else{
        Node* temp = head;
        int count = 1;
        while(count <= pos - 1){
            temp = temp->next;
            count++;
        }
        Node* n = temp->next;
        temp->next = n->next;
        delete n;
    }
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

    deletionFront(head);
    deleteEnd(head);
    deleteMid(head,2);

    printLinkedlist(head);

    return 0;
}