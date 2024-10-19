#include <bits/stdc++.h>
using namespace std;


void merge(vector<int>&arr, int s, int e){
    int mid = (s+e)/2;
    // cout << e << endl;
    int len1 = mid - s + 1;
    int len2 = e-mid;
    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;

    for (int i=0; i<len1; i++){
        first[i] = arr[k++];
    }

    for (int i=0; i<len2; i++){
        second[i] = arr[k++];
    }

    k = s;
    int index1 = 0;
    int index2 = 0;
    while (index1<len1 && index2<len2){
        if(first[index1]<=second[index2]){
            arr[k++] = first[index1++];
        }else{
            arr[k++] = second[index2++];
        }
    }
    while (index1<len1){
        arr[k++] = first[index1++];
    }
    
    while (index2<len2){
        arr[k++] = second[index2++];
    }

}

void mergeSort(vector<int> &arr, int s, int e){
    int mid = (s+e)/2;
    if(s>=e){
        return;

    }
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr,s ,e);
}


int main (){
    vector <int> arr = {4,23,4,54,2,3,54,5,232};
    mergeSort(arr, 0, arr.size()-1);
    for (int i: arr){
        cout << i << " ";
    }

}