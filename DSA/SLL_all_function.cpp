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
    ~Node(){
        int value = this->data;
        if(this->next == NULL){
            delete next;
            this->next = NULL;
        }
        cout << "memory has been freed for this value " << value << endl;
    }
};

void insertAtHead(Node* &head,  int val){
    Node* n = new Node(val);
    
    
    n->next = head;
    head = n;
    
    return;
    
}

void insertAtTail(Node* &tail, Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        head = n;
        tail = n;
        return;
    }
    // Node* temp = tail;
    tail->next = n;
    tail = tail->next;
    return;
}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data <<" -> " ;
        temp = temp->next;
    }
    cout << endl;
}

void deletePosition(Node* &head, int val){
    if(head->data == val){
        Node* n = head;
        head = head->next;
        n->next = NULL;
        delete n;
        return;
    }
    
    else{
        Node* temp = head;
        while (temp->next->data != val){
            temp= temp->next;
        }
        Node* a = temp->next;
        temp->next = temp->next->next;
        a->next = NULL;
        delete a;
        return;
    }
}
Node* insertAtPosition(Node* &head , int position, int val){
    Node*temp = head;
    Node * n = new Node(val);
    int count =1;
    if(position == 1){
        n->next = head;
        head = n;
        return head;
    }
    
    else{
        while (count <= position-2){
        
            temp = temp->next;
            count++;
        }
        n->next = temp->next;
        
        temp->next  = n;


    }
    return temp;
        // display(head);
    
}

void recInsertAtK(Node* &head, int k, int val, int count){
    Node* n = new Node(val);
    if(k==1){
        n->next = head;
        head = n;
        return;
    }
    if(count == k-1){
        n->next = head->next;
        head->next = n;
        // cout << "hasj";
        return ;
    }
    count++;
    recInsertAtK(head->next, k, val, count);
}


int main (){
    Node* head = NULL;
    Node* tail = head;

    insertAtTail(tail,head,5);
    insertAtTail(tail,head,3);
    insertAtTail(tail,head,4);
    insertAtTail(tail,head,1);
    insertAtTail(tail,head,9);
    insertAtHead(head, 69);
    // deletePosition(head, 1);
    // insertAtPosition(head, 3, 43);
    // Node* temp = head;
    recInsertAtK(head, 1, 60, 1);
    display(head);

}