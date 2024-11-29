#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            this->data = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void insert(Node* &root, int val){
    if(!root){
        root = new Node(val);
        return ;
    }

    if(root->data <= val){
        insert(root->right, val);
    }
    if(root->data > val){
        insert(root->left, val);
    }
}

void inOrder(Node* root){
    if(!root) return ;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

Node* findMin(Node* root){
    if(!root->left) return root;
    return findMin(root->left);
}
Node* deletee(Node* root, int val){
    if(!root) return root;
    if(root->data > val){
        root->left = deletee(root->left, val);
    }else if(root->data < val){
        root->right = deletee(root->right, val);
    }else{
        if(!root->left && !root->right){
            root = NULL;
        }else if(!root->left){
            root  = root->right;
            // return root;
        }else if(!root->right){
            root = root->left;
            // return root;
        }else{

            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deletee(root->right, temp->data);
        }
            
        
    }
    return root;
}


int main(){
    Node* root = NULL;
    //15 16 3 65 2 78 43 1 9 5 -1
    int n;
    while(true){
        cin >> n;
        if(n == -1) break;
        insert(root, n);
    }
    root = deletee(root, 43);
    inOrder(root);
}