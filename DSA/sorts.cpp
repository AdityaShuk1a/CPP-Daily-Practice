#include <bits/stdc++.h>

using namespace std;



// void merge(vector <int> &arr,int l,int r ){
//     int mid = (l+r)/2;
//     int len1 = mid-l+1;
//     int len2 = r-mid;

//     int index1 = 0;
//     int index2 = 0;
//     int k = l;

//     int * first = new int[len1];
//     int * second = new int[len2];

//     for (int i=0; i<len1; i++){
//         first[i] = arr[k++];
//     }

//     for (int i=0; i<len2; i++){
//         second[i] = arr[k++];
//     }

//     k = l;
//     while(index1 < len1 && index2 < len2){
//         if(first[index1] < second[index2]){
//             arr[k++] = first[index1++];
//         }
//         else{
//             arr[k++] = second[index2++];

//         }
//     }

//     while(index1 < len1){
//         arr[k++] = first[index1++];
//     }
//     while(index2 < len2){
//         arr[k++] = second[index2++];
//     }

// }


// void mergeSort(vector<int> & arr, int l, int r){
//     if(l>=r){
//         return;

//     }

//     int mid = (l+r)/2;
//     mergeSort(arr, l, mid);
//     mergeSort(arr, mid+1, r);
//     merge(arr, l , r);
// }


int pivot(vector<int> & arr, int l, int r){
    int pivot = arr[r];
    int i = l-1;
    for (int j = l; j<r; j++){
        if(arr[j] < pivot){
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp; 
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[r];
    arr[r] = temp;
    return i;

}

void quickie(vector <int> & arr, int l, int r){
    if(l>=r){
        return;

    }


    int p = pivot(arr, l, r);
    quickie(arr, l, p-1);
    quickie(arr, p+1, r);

}

int main()
{
    vector <int> arr = {4,2,3,5,7,7,3,2,4,6,7,3,3,5,7,78,9,1}; 
    // mergeSort(arr, 0, arr.size()-1);
    quickie(arr, 0, arr.size()-1);
    for(int i: arr){
        cout << i << " ";
    }   
    return 0;
}
