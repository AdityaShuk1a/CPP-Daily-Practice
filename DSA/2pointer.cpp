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

void insertIntoList(Node* &head, int val){
    Node* n = new Node(val);
    // cout << n->data << " ";
    if(head == NULL){
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
        // cout << temp->data << " ";

    }
    temp->next = n;
    return;

}

Node* merge(Node* l1, Node* l2) {
    Node dummy(0);  // Dummy node to start the merged list
    Node* curr = &dummy;

    while (l1 != NULL && l2 != NULL) {
        if (l1->data <= l2->data) {
            curr->next = l1;
            l1 = l1->next;
        } else {
            curr->next = l2;
            l2 = l2->next;
        }
        curr = curr->next;
    }

    // Link the remaining part of l1 or l2
    if (l1) curr->next = l1;
    if (l2) curr->next = l2;

    return dummy.next;
}

Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* temp = NULL;
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && fast->next != NULL){
        temp = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    temp->next = NULL;
    Node* l1 = mergeSort(slow);
    Node* l2 = mergeSort(head);

    return merge(l1, l2);

}


void display(Node* head){
    if(head==NULL){
        cout << "nothing" ;
    }
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}
int main()
{
    Node* head = NULL;
    insertIntoList(head, 6);
    insertIntoList(head, 5);
    insertIntoList(head, 2);
    insertIntoList(head, 6);
    insertIntoList(head, 7);
    insertIntoList(head, 231);
    insertIntoList(head, 1);

    head = mergeSort(head);

    display(head);
    return 0;
}
