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
            if(arr[parent] > arr[index]){
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
};




int main()
{
    heap h;
    h.insert(1);
    h.insert(56);
    h.insert(485);
    h.insert(500);
    h.insert(8);
    h.insert(2);

    h.print();
    return 0;
}
