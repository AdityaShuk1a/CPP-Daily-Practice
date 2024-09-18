#include <bits/stdc++.h>

using namespace std;

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

void InsertAtTail(Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        head = n;
        
        return;

    }
    Node* temp = head;
    while (temp->next != NULL){
        temp = temp ->next;

    }
    temp->next = n;
    n->prev = temp;
}

Node* recursive(Node* &head, int k , int c, int val ){
    Node* temp = head;
    Node* n = new Node(val);
    if(k-1==c){
        n->next = temp->next;
        temp->next = n;
        return temp;
    }
    else if(k==1){
        // Node* n = new Node(val);
        n->next = head;
        head = n;
        return head;
    }
    c = c+1;
    temp->next = recursive(temp->next, k, c, val);
    return temp;
}

void display(Node* head){
    Node* temp = head;
    
    cout <<  "original linked list" << endl;
    while(temp!=NULL){
        cout << temp->data << " -> ";
        if(temp->next == NULL) break;
        temp = temp->next;

    }
    cout <<endl;
    cout << "reversed Linked list" << endl;
    // temp = temp->prev;
    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->prev;
    }

    cout <<endl;
}

int main (){
    Node* head = NULL;
    InsertAtTail(head, 69);
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 87);
    recursive(head, 1, 0, 23);
    recursive(head, 2, 0, 45);
    recursive(head, 4, 0, 1222);
    display(head);
}