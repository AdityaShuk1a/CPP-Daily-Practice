#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node (int val){
            this->data = val;
            next = NULL;
        }
};  

void inserttail(Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;

}
void printData(Node* &head){
    Node* temp = head;
    while (temp->next!=NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout <<  "BLABA" << endl;
}

// void delete(Node* &head, int postition){
//     Node* temp = head;
//     while (temp->next== postition-1){
//         temp->next = temp->next->next;
//         return;
//     }
// }


int main (){
    Node* head = NULL;
    inserttail(head, 1);
    inserttail(head, 2);
    inserttail(head, 3);
    inserttail(head, 4);
    inserttail(head, 5);
    inserttail(head, 6);
    // delete(head, 1);
    printData(head);
}