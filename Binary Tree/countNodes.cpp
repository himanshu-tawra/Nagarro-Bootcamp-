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


int countNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;
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

    int nodes = countNodes(root);
    cout<<"Number of nodes : "<<nodes<<endl;

    return 0;
}