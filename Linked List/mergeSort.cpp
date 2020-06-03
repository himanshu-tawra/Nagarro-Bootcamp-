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



Node* middle(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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


Node* mergeSortedLinkedlist(Node* &h1,Node* &h2){
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

Node* mergeSort(Node* &head){

    // Base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    // recursive case

    //1.divide
    Node* mid = middle(head);
    Node* h1 = head;
    Node* h2 = mid->next;
    mid->next = NULL;

    // 2. Sort
    h1 = mergeSort(h1);
    h2 = mergeSort(h2);

    // 3. Merge
    Node* newHead = mergeSortedLinkedlist(h1,h2);
    return newHead;
}


int main(){

    Node* head = NULL;

    for(int i = 10; i >= 1; i--){
        insertionEnd(head,i);
    }

    printLinkedlist(head);
    Node* newHead = mergeSort(head);

    printLinkedlist(newHead);

    return 0;
}