
// Ques 2: Write a C++ code that take linked list from user input and a value integer .
//  Delete the value from the linkedlist. Sample Input :- 10->20->30->40 value = 20 Sample Output :- 10->30->40

#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data = val;
        this->next = NULL;

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
}

void deleteNode(Node* &head, int val){
    if(head->data == val){
        head = head->next;
        return;
    }
    Node* temp = head;
    while (temp->next->data!= val){
        temp= temp->next;
    }
    temp->next = temp->next->next;
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
    Insert(head,30 );

    cout << "original : " << endl;
    display(head);
    deleteNode(head, 20);
    cout << "deleted : " << endl;
    display(head);


    return 0;
}
