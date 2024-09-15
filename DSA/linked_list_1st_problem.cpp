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
        ~Node(){
            int value = this->data;
            if(this->next!=NULL){
                delete next;
                this->next = NULL;

            }
            cout << " your memory for the particular node is freed enjoy have a nice dday." << endl;
        }
};

void insertAtHead(Node* &head, int val){

    Node* n = new Node(val);

    n->next = head;
    head = n;
}

void insertAtTail(Node* &head,Node* &tail, int val){
    //create a new node in which data feild will have val and next pointer will be NULL
    Node* n = new Node(val);
 
    if(head == NULL){
        head = n;
        tail = head;
        return;
    }

    // Node* temp = head;

    tail->next = n;
    tail = tail->next;
    // while(temp->next != NULL){
    //     temp = temp->next;
    // }

    // temp->next = n;


}

void display(Node* head){

    Node* temp = head;

    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    
}
void deleteN(Node* &head, int position){
    Node * temp = head;
    if(position == 1){
        Node* a = head;
        head = head->next;
        a->next = NULL;
        delete a;
        return;
    }
    for (int i=0; i<position-1; i++){
        temp = temp->next;

    }
    Node * a = temp->next;
    temp->next = temp->next->next;
    a->next = NULL;
    delete(a);
}

int main (){

    Node* head = NULL;
    Node* tail = head;
    insertAtTail(head,tail, 1);
    insertAtTail(head,tail, 2);
    insertAtTail(head,tail, 3);
    insertAtTail(head,tail, 4);

    // insertAtHead(head, 7);
    deleteN(head, 1);

    display(head);
    

}