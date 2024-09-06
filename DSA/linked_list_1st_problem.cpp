#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            this->data = val;
            next = NULL;

        }
};

void insertAtTail(Node* &head, int val){
    //create a new node in which data feild will have val and next pointer will be NULL
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;


}

void display(Node* head){

    Node* temp = head;

    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    
}

int main (){

    Node* head = NULL;
    insertAtTail(head, 1);
    

    display(head);
    

}