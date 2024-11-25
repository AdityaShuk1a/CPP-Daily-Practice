// You are using GCC
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next = NULL;
        Node(int val){
            this->data = val;
            this->next = NULL;
        }
};

void insert(Node* &root, int val){
    Node* n = new Node(val);
    if(root == NULL){
        root = n;
        return ;
    }
    
    n->next = root;
    root = n;
    return;
}

void print(Node* root){
    while(root){
        cout << root->data << " ";
        root = root->next;
    }
    cout << endl;
}
void deleteThre(Node* &root, int val){
    if(root == NULL) return ;
    Node* curr = root;
    Node* prev = NULL;
    while(curr!=NULL){
        if(curr->data < val){
            if(prev!=NULL){
                
                prev->next = curr->next;
            }
            Node* temp = curr->next;
            curr = curr->next;
            delete temp;
        }else{
            prev = curr;
            curr = curr->next;
        }
    }
}

int main(){
    int n;
    cin >> n;
    Node* root = NULL;
    while(n--){
        int x;
        cin >> x;
        insert(root, x);
    }
    cout << "Original Linked List: " ;
    print(root);
    int thre;
    cin >> thre;
    // deleteThre(root, thre);
    cout << "Modified Linked List: ";
    print(root);
}