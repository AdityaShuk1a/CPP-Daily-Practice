// Ques 2: Write a function void insertAtEnd(Node*& head, int data) that inserts a new node with the given data 
// at the end of a singly linked list. nput: A linked list with elements 10 -> 20 -> 30, and a new data 40
// Output: The linked list becomes 10 -> 20 -> 30 -> 40

#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node * next = NULL;
    Node(int val){
        this->data = val;
        next = NULL;
    }
};

void append(Node* &head , int val){
    Node *n = new Node(val);
    if(head == NULL){
        head = n;
        return ;
    }
    Node * temp = head;
    while (temp->next != NULL){
        temp = temp->next;

    }
    temp->next = n;
}

void display(Node* head){
    
    while(head!=NULL){
        cout << head->data << "->";
        head = head->next;
    }

}

int main (){
    int n;
    cin >> n;
    Node* head = NULL;

    for (int i=0; i< n; i++){
        int m;
        cin >> m;
        append(head,m );
    }
    display(head);
}