// #include <bits/stdc++.h>

// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;
//         Node (int val){
//             this->data = val;
//             next = NULL;
//         }
// };  

// void inserttail(Node* &head, int val){
//     Node* n = new Node(val);
//     if(head == NULL){
//         head = n;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next!=NULL){
//         temp = temp->next;
//     }
//     temp->next = n;

// }
// void printData(Node* &head){
//     Node* temp = head;
//     while (temp->next!=NULL){
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout <<  "BLABA" << endl;
// }

// // void delete(Node* &head, int postition){
// //     Node* temp = head;
// //     while (temp->next== postition-1){
// //         temp->next = temp->next->next;
// //         return;
// //     }
// // }


// int main (){
//     Node* head = NULL;
//     inserttail(head, 1);
//     inserttail(head, 2);
//     inserttail(head, 3);
//     inserttail(head, 4);
//     inserttail(head, 5);
//     inserttail(head, 6);
//     // delete(head, 1);
//     printData(head);
// }

#include <bits/stdc++.h>

using namespace std;

// struct account {
//     int data;
//     string s;
//     bool ss;
//     char valu;
// };

// union data {
//     account aa;
//     data() { new(&aa) account(); } // Placement new to construct the account
//     ~data() { aa.~account(); }     // Explicitly call the destructor
// };

// int main() {
//     data a;
//     a.aa.data = 10;
//     a.aa.s = "haa";
//     a.aa.ss = false;
//     a.aa.valu = 'a';
//     cout << a.aa.data << " " << a.aa.valu << " " << a.aa.s << " " << a.aa.ss << endl;

//     return 0;
// }

class account {
    private:
        int accountId;
    public:
        
};



class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            this->data = val;
            next = NULL;
        }
};


void insert(Node* &head, int val){
    Node* n = new Node(val);
    if(head == NULL){
        head = n;
        // next = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next!=NULL){
        temp = temp->next;
        // temp->prev = temp;
    }
    temp->next = n;
}

void print(Node* &head){
    Node* temp = head;
    while (temp!= NULL){
        cout << temp->data << "->";
        temp = temp->next; 
    }
    cout << "NULL";
    

}

int main (){
    Node* head = NULL;
    insert(head, 1);
    // *head = NULL;
    // Node* head = NULL;
    insert(head, 3);
    // *head = NULL;
    insert(head, 4);
    print(head);

    // int a  = 6;
    // int *ptr = &a;
    // int &b = a;
    // cout << b << endl;
    // cout << *ptr << " " << a;
}
