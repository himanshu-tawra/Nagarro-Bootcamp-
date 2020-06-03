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

int length(Node* head){
    if(head == NULL){
        return 0;
    }
    return length(head->next) + 1;
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

void bubbleSort(Node* &head){
    int len = length(head);
    for(int i = 1; i <= len - 1; i++){
        Node* prev = NULL;
        Node* current = head;
        Node* nextNode;
        while(current && current->next){
            nextNode = current->next;
            if(current->data > nextNode->data){
                if(prev == NULL){
                    current->next = nextNode->next;
                    nextNode->next = current;
                    head = prev = nextNode;
                }
                else{
                    current->next = nextNode->next;
                    nextNode->next = current;
                    prev->next = nextNode;
                    prev = nextNode;

                }
            }
            else{
                prev = current;
                current = nextNode;
            }
        }
    }
}


int main(){

    Node* head = NULL;

    for(int i = 10; i >= 1; i--){
        insertionEnd(head,i);
    }

    printLinkedlist(head);
    
    bubbleSort(head);

    printLinkedlist(head);

    return 0;
}