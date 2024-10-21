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

Node* insertIntoBST(Node* root, int data){
    if(root == NULL){
        root = new Node( data);
        return root;

    }else{
        if(data > root->data){
            root->right  = insertIntoBST(root->right, data);
        }else{
            root->left = insertIntoBST(root->left, data);
        }
    }
    return root;
}

void InsertIntoTree(Node* &root){
    int data;
    cout << "enter your data please its a request: " << endl;
    while (true){
        
        cin >> data;
        if(data == -1){
            break;
        }
        root = insertIntoBST(root, data);
    }
}

void dekhleTree(Node* root){
    if(root == NULL){
        return;
    }

    dekhleTree(root->left);
    cout << root->data << " ";
    dekhleTree(root->right);
}

void levelOrderPrinting(Node* root){
    queue<Node*> q ;
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
            cout  << temp->data << "   ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}

int main()
{
    Node* root = NULL;
    //10 9 8 11 12 13 4 5 17 -2 100 21 33 21 45 5 -1
    InsertIntoTree(root );
    levelOrderPrinting(root);
    return 0;
}
