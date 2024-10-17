#include <bits/stdc++.h>
using namespace std;


void merge(vector<int>*arr, int s, int e){
    int mid = (s+e)/2;
    int len1 = gv
    int len2 = e-mid;
}

void mergeSort(vector<int> &arr, int s, int e){
    int mid = (s+e)/2;
    if(s>e){
        return;

    }
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr,s ,e);
}


int main (){
    vector <int> arr = {4,23,4,54,2,3,54,5,232};
    mergeSort(arr, 0, arr.size());


}