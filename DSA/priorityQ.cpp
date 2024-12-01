// You are using GCC
#include <iostream>
using namespace std;

struct Node {
    int data;
    int priority;
    Node* next;
};

Node* createNode(int value, int priority) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->priority = priority;
    newNode->next = nullptr;
    return newNode;
}

bool isEmpty(Node* front) {
    return front == nullptr;
}

void push(Node*& front, int value, int priority) {
    //Type your code here
    Node* n = createNode(value, priority);
    
    if(front == NULL){
        front = n;
        return ;
    }
    Node* temp = front;
    if(front->priority > priority){
        n->next = front;
        front = n;
        return;
    }
    while(!temp->next && temp->priority > priority)
    {
        temp = temp->next;
        
    }
    if(temp->next){
        n->next = temp->next;
        temp->next = n;
    return;
    }
    temp->next = n;
    return ;
    
}

void pop(Node*& front) {
    //Type your code here
    Node* temp = front;
    
    front = front->next;
    delete temp;
}

// int peek(Node* front) {
//     //Type your code here
//     cout << 
    
// }

void traverse(Node* front) {
    //Type your code here
    Node* temp = front;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node* front = nullptr;

    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int value, priority;
        cin >> value >> priority;
        push(front, value, priority);
    }

    cout << "Priority Queue: ";
    traverse(front);

    return 0;
}