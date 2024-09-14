// Ques 1 : Write a function void printLinkedList(Node* head) that traverses a singly linked list and
//  prints each element's value. Input: A linked list with elements 10 -> 20 -> 30 -> 40
// Output: 10 20 30 40

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

void insert(Node* &head , int val){
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
        insert(head,m );
    }
    display(head);
}
