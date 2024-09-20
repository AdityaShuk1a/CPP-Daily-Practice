#include <bits/stdc++.h>

using namespace std;

// Ques 1: Write a C++ code that take linked list from user input that is in sorted order and a value integer. Now insert the value inside 
// linkedlist such that new likedlist is also in sorted order. Sample Input:- 10->20->30->40 value =25 Sample Output:- 10->20->25->30->40


class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        this->data = val;
        this->next = NULL;
        this->prev = NULL;

    }
};


void Insert(Node* &head, int val){
    Node*n = new Node(val);
    if(head==NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next!=NULL){
        temp= temp->next;
    }
    temp->next = n;
    n->prev = temp;
}


void insertAtPosi(Node* &head, int val){
    Node* n = new Node(val);
    Node* temp = head;
    if(n->data < head->data){
        n->next = head;
        head = n;
        return;
    }
   

    while (temp->next && temp->next->data < n->data) {
        temp = temp->next;
    }

    // Insert the new node
    n->next = temp->next;
    if (temp->next) {
        temp->next->prev = n;
    }
    temp->next = n;
    n->prev = temp;    
}

void display(Node* &head){
    Node* temp = head;
    while (temp!=NULL){

        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    Node* head = NULL;

    Insert(head,10 );
    Insert(head,20 );
    Insert(head,30 );
    Insert(head,40 );
    Insert(head,50 );
    
    display(head);

    insertAtPosi(head, 45);

    display(head);
    return 0;
}
