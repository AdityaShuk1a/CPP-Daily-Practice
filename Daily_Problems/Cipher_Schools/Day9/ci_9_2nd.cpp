
// Ques 2: Write a program that declares an array of integers and a pointer that points to the first element of the array. Use pointer arithmetic to print all the elements of the array.

#include <bits/stdc++.h>

using namespace std;

int main (){

    int arr[] = {1,2,3,4,5,6,7,7};

    int *ptr =arr;
    for (int i = 0; i<sizeof(arr); i++){
        cout << *(ptr+i) << " ";
    }
}