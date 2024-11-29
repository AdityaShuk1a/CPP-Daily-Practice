#include <bits/stdc++.h>
using namespace std;

void heapifyMax(int arr[], int n, int i){
    int k = i;
    int l = 2 * i + 1;
    int r = l + 1;
    if(l < n && arr[l] > arr[k]){
        k = l;
    }
    if(r < n && arr[r] > arr[k]){
        k = r;
    }
    if(k!=i){
        swap(arr[k], arr[i]);
        heapifyMax(arr, n, k);
    }

}

void buildMax(int arr[], int n){
    for(int i = n /2 ; i>=0; i--){
        heapifyMax(arr, n, i);
    }
}

void heapSort(int arr[], int n){
    buildMax(arr, n);
    for(int i = n-1; i>=0; i--){
        swap(arr[0], arr[i]);
        heapifyMax(arr, i, 0);
    }
}

void insert(int arr[], int &n, int val){
    arr[n++] = val;
    int i = n-1;
    while(i > 0 && arr[(i-1)/2] < arr[i]){
        swap(arr[(i-1)/2], arr[i]);
        i = (i-1)/2;
    }
}

void print(int arr[], int n){
    for(int i = 0; i< n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    //97 84 5 23 77 1919 -1
    int n = 0;
    int arr[100];
    while(true){
        int x;
        cin >> x;
        if(x==-1) break;
        insert(arr,n, x);
    }
    for(int i = 0; i<n; i++){
        if(arr[i] == 77){
            arr[i] = arr[n-1];
            n--;
            heapifyMax(arr, n, i);

        }
    }
    print(arr, n);
}