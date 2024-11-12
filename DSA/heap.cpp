#include <bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100]= {0};
    int size = 0;
    
    void insert(int val){
        size = size+1;
        int index = size;
        arr[index]= val;
        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[index], arr[parent]);
                index = parent;
            }else{
                return;
            }
        }
    }

    void print(){
        for(int i=1 ;i<=size; i++){
            cout << arr[i] << " ";

        }
        cout << endl;
    }

     void deletefromheap() {
        if (size == 0) {
            cout << "Nothing to delete" << endl;
            return;
        }

        // Replace root with last element and reduce heap size
        arr[1] = arr[size];
        size--;

        // Re-heapify the tree from root downwards
        int i = 1;
        while (i <= size) {
            int leftchild = 2 * i;
            int rightchild = 2 * i + 1;
            int largest = i;

            // Compare with left child
            if (leftchild <= size && arr[leftchild] > arr[largest]) {
                largest = leftchild;
            }

            // Compare with right child
            if (rightchild <= size && arr[rightchild] > arr[largest]) {
                largest = rightchild;
            }

            // If the largest is not the current node, swap and continue
            if (largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            } else {
                return;
            }
        }
    }
};




int main()
{
    heap h;
    // int arr[9] = {546,234,12,5,23,54,232,5};
    // for(int i=0; i)
    h.insert(4);
    h.insert(445);
    h.insert(6);
    h.insert(324);
    h.insert(857);
    h.insert(87);
    h.insert(1);
    h.insert(90);

    h.print();
    h.deletefromheap();
    h.print();
    h.deletefromheap();
    h.print();
    return 0;
}
