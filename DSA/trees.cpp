#include <bits/stdc++.h> 
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int val){
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }

};

Node* buidTree(Node* root){
    int data;
    cin >> data;

    if(data == -1){
        return NULL;
    }
    root = new Node(data);
    root->left = buidTree(root->left);
    root->right = buidTree(root->right);
    return root;

}

void LevelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }

        }else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}

Node* traverseTree(Node* root){

}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    LevelOrderTraversal(root);
    return 0;
}
