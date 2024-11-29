#include <bits/stdc++.h>

using namespace std;

void print(vector<int> arr, int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(vector<int>& arr, int l, int h, int size){
    int mid = l + (h - l) /2 ;

    int len1 = mid - l + 1;
    int len2 = h - mid ;

    int* first = new int[len1];
    int* sec = new int[len2];
    int k = l;
    int index1 = 0;
    int index2 = 0;

    for(int i = 0; i<len1; i++){
        first[i] = arr[k++];
    }
    
    for(int i = 0; i<len2; i++){
        sec[i] = arr[k++];
    }

    k = l;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < sec[index2]){
            arr[k++] = first[index1++];
        }else{
            arr[k++] = sec[index2++];

        }
    }

    while(index1 < len1){
        arr[k++] = first[index1++];

    }
    while(index2 < len2){
        arr[k++] = sec[index2++];

    }

    print(arr, size);

}


void mergeSort(vector<int>& arr, int l, int h, int size){
    if(l>=h){
        return ;
    }

    int mid = l + (h - l) /2 ;
    mergeSort(arr, l , mid, size);
    mergeSort(arr, mid + 1 , h, size);
    merge(arr, l , h, size);
}




int pivot(vector<int>& arr, int l, int h, int size){
    int pivot = arr[h];
    int i = l-1;
    for(int j = l; j< h; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[j], arr[i]);
        }
    }
    i++;
    swap(arr[i], arr[h]);
    print(arr, size);
    return i;
}
void quickSort(vector<int>& arr, int l, int h, int size){
    if(l>=h){
        return;
    }
    int p = pivot(arr, l, h, size);
    quickSort(arr, l, p-1,size);
    quickSort(arr, p+1, h, size);
}

int main(){
    vector <int> arr = {45,123,5463,232,53,23,5,2,3,5};
    // mergeSort(arr, 0, arr.size()-1, arr.size());
    quickSort(arr, 0, arr.size()-1, arr.size());

    // print(arr, arr.size());
}