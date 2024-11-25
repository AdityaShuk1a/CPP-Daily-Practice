#include <iostream>
using namespace std;

int rec = 0;

// Function to print the array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Merge function to merge the two halves
void conquer(int arr[], int l, int m, int r) {
    int len1 = m - l + 1;
    int len2 = r - m;

    // Create temporary arrays to hold the two halves
    int *first = new int[len1];   
    int *sec = new int[len2];
    
    // Copy the data to temp arrays
    for(int i = 0; i < len1; i++) {
        first[i] = arr[l + i];
    }
    for(int i = 0; i < len2; i++) {
        sec[i] = arr[m + 1 + i];
    }
    
    // Merge the temporary arrays back into the original array
    int i = 0, j = 0, k = l;
    while(i < len1 && j < len2) {
        if(first[i] <= sec[j]) {
            arr[k++] = first[i++];
        } else {
            arr[k++] = sec[j++];
        }
    }
    
    // Copy the remaining elements
    while(i < len1) {
        arr[k++] = first[i++];
    }
    while(j < len2) {
        arr[k++] = sec[j++];
    }

    // Print after each merge iteration
    cout << "After iteration " << ++rec << endl;
    printArray(arr, r + 1);  // Print the full array after each merge iteration

    // Clean up memory
    delete[] first;
    delete[] sec;
}

// Function to divide the array and recursively call conquer
void divide(int arr[], int l, int r) {
    if(l >= r) return;  // Base case for recursion to stop
    
    int mid = l + (r - l) / 2;  // Find middle
    divide(arr, l, mid);         // Recursively divide the left half
    divide(arr, mid + 1, r);     // Recursively divide the right half
    
    conquer(arr, l, mid, r);     // Merge the two halves
}

int main() {
    int n;
    cin >> n; // Size of the array
    int arr[n];
    
    // Read the array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Print the given array
    cout << "Given Array" << endl;
    printArray(arr, n);
    
    // Call divide function to sort the array
    divide(arr, 0, n - 1);
    
    // Print the sorted array
    cout << "\nSorted Array" << endl;
    printArray(arr, n);
    
    return 0;
}
