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

int preOrder[] = {8,3,1,6,4,7,10,14,13};
int inOrder[] = {1,3,4,6,7,8,10,13,14};
int k = 0; 


Node* buildTree(int start,int end){
    if(start > end){
        return NULL;
    }

    int data = preOrder[k++];
    Node* root = new Node(data);

    int j = -1;
    for(int i = start; i <= end; i++){
        if(inOrder[i] == data){
            j = i;
            break;
        }
    }
    root->left = buildTree(start,j-1);
    root->right = buildTree(j+1,end);

    return root;


}

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



int main(){

    Node* root = buildTree(0,8);

    levelOrder(root);
    
   
    return 0;
}