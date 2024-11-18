// #include <iostream>
// using namespace std;

// const int MAX_SIZE = 100; // Maximum size for the heap array
// int heap[MAX_SIZE];       // Array to store heap elements
// int heapSize = 0;         // Current size of the heap

// // Custom swap function
// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// // Function to insert an element into the heap
// void insert(int value) {
//     if (heapSize >= MAX_SIZE) {
//         cout << "Heap is full!\n";
//         return;
//     }
//     heap[heapSize] = value;
//     int current = heapSize;

//     // Up-heapify to maintain the heap property
//     while (current > 0 && heap[(current - 1) / 2] < heap[current]) {
//         swap(heap[current], heap[(current - 1) / 2]);
//         current = (current - 1) / 2;
//     }
//     heapSize++;
// }

// // Function to heapify a subtree with the root at given index
// void heapify(int index) {
//     int largest = index;
//     int left = 2 * index + 1;
//     int right = 2 * index + 2;

//     if (left < heapSize && heap[left] > heap[largest]) {
//         largest = left;
//     }
//     if (right < heapSize && heap[right] > heap[largest]) {
//         largest = right;
//     }
//     if (largest != index) {
//         swap(heap[index], heap[largest]);
//         heapify(largest);
//     }
// }

// // Function to delete the root element from the heap
// void deleteRoot() {
//     if (heapSize <= 0) {
//         cout << "Heap is empty!\n";
//         return;
//     }
//     heap[0] = heap[heapSize - 1];
//     heapSize--;
//     heapify(0);
// }

// // Function to build a heap from an arbitrary array of elements
// void buildHeap(int arr[], int size) {
//     heapSize = size;
//     for (int i = 0; i < size; i++) {
//         heap[i] = arr[i];
//     }
//     for (int i = (heapSize / 2) - 1; i >= 0; i--) {
//         heapify(i);
//     }
// }

// // Function to sort the heap (heap sort)
// void heapSort() {
//     int originalSize = heapSize;
//     for (int i = heapSize - 1; i > 0; i--) {
//         swap(heap[0], heap[i]);
//         heapSize--;
//         heapify(0);
//     }
//     heapSize = originalSize;
// }

// // Function to print the heap
// void printHeap() {
//     for (int i = 0; i < heapSize; i++) {
//         cout << heap[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {10, 20, 15, 30, 40};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     // Build heap from array
//     buildHeap(arr, size);
//     cout << "Heap after building: ";
//     printHeap();

//     // Insert elements
//     insert(50);
//     cout << "Heap after insertion of 50: ";
//     printHeap();

//     // Delete root element
//     deleteRoot();
//     cout << "Heap after deleting root: ";
//     printHeap();

//     // Heap sort
//     heapSort();
//     cout << "Heap after sorting: ";
//     printHeap();

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

// You are using GCC
// You are using GCC
void swap(int *x, int *y) {
    //Type your code here
    int temp = *x;
    *x = *y;
    *y = temp;
}

void minHeapify(int heap[], int size, int i) {
    //Type your code here
    int k = i;
    int l = 2*i+1;
    int r = l+1;
    if(l < size && heap[l] < heap[k]){
        k = l;
    }
    if(r < size && heap[r] < heap[k]){
        k = r;
    }
    if(k!=i){
        swap(&heap[k], &heap[i]);
        minHeapify(heap, size, i);
    }
}

void buildMinHeap(int heap[], int size) {
    //Type your code here
    for(int i = size/2; i>-1; i--){
        minHeapify(heap, size, i);
    }
    
}

void insertElement(int heap[], int *size, int value) {
    //Type your code here
    heap[*size] = value;
    (*size)+=1;
    int i = *size -1;
    while(i != 0 && heap[(i-1)/2] > heap[i]){
        swap(&heap[(i-1)/2], &heap[i]);
        i = (i-1)/2;
    }
    
}

void displayMinHeap(int heap[], int size) {
    //Type your code here
    for(int i = 0;i < size; i++){
        cout << heap[i] << " ";
    }
    cout << endl;
}

bool isPrime(int num) {
    //Type your code here
    for(int i = 0; i<num/2; i++){
        if(num%i==0){
            return true;
        }
    }
    return false;
}

void deleteSmallestPrime(int heap[], int *size) {
    //Type your code here
    int min = 0;
    for(int i = 0;i <*size; i++){
        if(isPrime(heap[i])){
            if(heap[i] < min){
                min = heap[i];
            }
        }
        
    }
    int k = 0;
    int *arr2 = new int[*size];
    for(int i = 0;i <*size; i++){
        if(heap[i]!=min){
            arr2[k++] = heap[i];
        }
    }
    
    for(int i=0; i<k; i++){
        heap[i] = arr2[i];
    }
    
    *size = k;
    delete []arr2;
    
    
}
int main() {
    int n;
    cin >> n;

    int heap[n];
    int size = 0;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        insertElement(heap, &size, value);
    }

    buildMinHeap(heap, size);

    cout << "Min Heap: ";
    displayMinHeap(heap, size);

    // Delete the smallest prime number from the heap
    deleteSmallestPrime(heap, &size);

    cout << "Updated Min Heap: ";
    displayMinHeap(heap, size);

    return 0;
}