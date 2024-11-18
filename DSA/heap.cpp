// #include <bits/stdc++.h>
// using namespace std;

// class heap{
//     public:
//     int arr[100]= {0};
//     int size = 0;
    
//     void insert(int val){
//         size = size+1;
//         int index = size;
//         arr[index]= val;
//         while(index > 1){
//             int parent = index/2;
//             if(arr[parent] < arr[index]){
//                 swap(arr[index], arr[parent]);
//                 index = parent;
//             }else{
//                 return;
//             }
//         }
//     }

//     void print(){
//         for(int i=1 ;i<=size; i++){
//             cout << arr[i] << " ";

//         }
//         cout << endl;
//     }

//      void deletefromheap() {
//         if (size == 0) {
//             cout << "Nothing to delete" << endl;
//             return;
//         }

//         // Replace root with last element and reduce heap size
//         arr[1] = arr[size];
//         size--;

//         // Re-heapify the tree from root downwards
//         int i = 1;
//         while (i <= size) {
//             int leftchild = 2 * i;
//             int rightchild = 2 * i + 1;
//             int largest = i;

//             // Compare with left child
//             if (leftchild <= size && arr[leftchild] > arr[largest]) {
//                 largest = leftchild;
//             }

//             // Compare with right child
//             if (rightchild <= size && arr[rightchild] > arr[largest]) {
//                 largest = rightchild;
//             }

//             // If the largest is not the current node, swap and continue
//             if (largest != i) {
//                 swap(arr[i], arr[largest]);
//                 i = largest;
//             } else {
//                 return;
//             }
//         }
//     }
// };




// int main()
// {
//     heap h;
//     // int arr[9] = {546,234,12,5,23,54,232,5};
//     // for(int i=0; i)
//     h.insert(4);
//     h.insert(445);
//     h.insert(6);
//     h.insert(324);
//     h.insert(857);
//     h.insert(87);
//     h.insert(1);
//     h.insert(90);

//     h.print();
//     h.deletefromheap();
//     h.print();
//     h.deletefromheap();
//     h.print();
//     return 0;
// }
#include <iostream>
using namespace std;

#define MAX_SIZE 100

void heapify(int arr[], int n, int i)
{
    int l = 2 * i;
    int r = 2 * i + 1;
    int curr = i;
    int parent = i/2;
    if(l < n && arr[l] > arr[curr]){
        curr = l;
    }
    
    if(r < n && arr[r] > arr[curr]){
        curr = r;
    }
    if(curr!=i){
        swap(arr[curr], arr[i]);
        heapify(arr, n , curr);
    }
    
}

void buildMaxHeap(int arr[], int n)
{
    for(int i = n/2;i >= 0 ; i--){
        heapify(arr, n, i);
    }
}

void deleteRoot(int arr[], int &n)
{
    arr[0] = arr[n-1];
    n--;
    buildMaxHeap(arr, n);
}

void printArray(int arr[], int n)
{
    //Type your code here
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
        
    }
    
}

int main()
{
    int n;
    cin >> n;

    int arr[MAX_SIZE];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    buildMaxHeap(arr, n);
    deleteRoot(arr, n);
    printArray(arr, n);

    return 0;
}