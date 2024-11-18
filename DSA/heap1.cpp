// You are using GCC
#include <iostream>
#include <iomanip>

using namespace std;

void swap(int &x, int &y) {
    //Type your code here
    int temp = x;
    x = y;
    y = temp;
    
    
    
}

void minHeapify(int heap[], int size, int i) {
    //Type your code here
    int smallest = i;
    int left = 2 * i;
    int right = left+1 ;
    if(left <= size && heap[left]  < heap[smallest] ){
        smallest = left;
    }
    if(right <= size && heap[right]  < heap[smallest] ){
        smallest = right;
    }
    
    if(smallest!=i){
        swap(heap[i], heap[smallest]);
        minHeapify(heap, size, smallest);
    }
}

void buildMinHeap(int heap[], int size) {
    //Type your code here
    for(int i = (size/2); i>=1; i--){
        minHeapify(heap, size, i);
    }
    
}

void insertElement(int heap[], int &size, int value) {
    //Type your code here
    size++;
    heap[size] = value;
    
    int i = size;
    buildMinHeap(heap, size);
    // while(i > 1 && heap[i] < heap[i/2]){
    //     swap(heap[i], heap[i/2]);
    //     i = i/2;
    // }
    
    
}

void displayMinHeap(int heap[], int size) {
    //Type your code here
    for(int i=1; i<=size; i++){
        cout << heap[i] <<  " ";
    }
    cout << endl;
    
}

double averageOfElements(int heap[], int size) {
    //Type your code here
    double a = 0;
    for(int i=1; i<=size; i++){
        a+=heap[i];
    }
    a= a/size;
    
    return a;
    
    
    
}

int main() {
    int n;
    cin >> n;

    int *heap = new int[n]; // Dynamic memory allocation for heap
    int size = 0;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        insertElement(heap, size, value);
    }
    
    buildMinHeap(heap, size);
    displayMinHeap(heap, size);

    double average = averageOfElements(heap, size);
    cout << "Average: "<< fixed << setprecision(2)<< average;

    delete[] heap; // Free dynamically allocated memory
    return 0;
}