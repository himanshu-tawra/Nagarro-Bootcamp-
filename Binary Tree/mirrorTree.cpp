#include<iostream>
#include<queue>
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


void levelOrder(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;

    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

    }
}

Node* levelOrderBuildTree(){
    Node* rootNode = NULL;
    int data;
    cin>>data;
    if(data == -1){
        return rootNode;
    }

    rootNode = new Node(data);
    queue <Node*> q;
    q.push(rootNode);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<"Enetr the children of "<<temp->data<<endl;
        int c1,c2;
        cin>>c1>>c2;
        if(c1 != -1){
            temp->left = new Node(c1);
            q.push(temp->left);
        }
        if(c2 != -1){
            temp->right = new Node(c2);
            q.push(temp->right);
        }
    }
    return rootNode;
}

void mirrorBT(Node* root){
    if(root == NULL){
        return;
    }

    swap(root->left,root->right);
    mirrorBT(root->left);
    mirrorBT(root->right);
}



int main(){

    cout<<"Enter root Node"<<endl;
    Node* root = levelOrderBuildTree();

    cout<<"Original Bianry Tree"<<endl;
    levelOrder(root);
    cout<<"Mirror image of Binary Tree"<<endl;
    mirrorBT(root);
    levelOrder(root);
    

   
    return 0;
}