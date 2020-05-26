#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int d){
            data = d;
            left = right = NULL;
        }
};

Node* createBT(){

    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);
    root->left = createBT();
    root->right = createBT();

    return root;
}


Node* searchNode(Node* root,int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    
    Node* searchLeft = searchNode(root->left,key);
    if(searchLeft != NULL){
        return searchLeft;
    }
    return searchNode(root->right,key);
}

void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}




int main(){

    Node* root = createBT();
    
    
    cout<<"Preorder"<<endl;
    preOrder(root);
    cout<<endl;

    int key;
    cin>>key;

    Node* found = searchNode(root,key);

    if(found != NULL){
        cout<<found->data<<" found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    
    return 0;
}