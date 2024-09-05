#include<bits/stdc++.h>
using namespace std;

int Partition(int * A, int left, int right){
    int pivot = A[right];
    int pIndex = left;

    for(int i = left; i < right; i++){
        if(A[i] <= pivot){
            swap(A[i], A[pIndex]);
            pIndex++;
        }
    }
    swap(A[right], A[pIndex]);
    return pIndex;
}

void QuickSort(int * A, int left, int right){
    if(left < right){
        int pIndex = Partition(A, left, right);
        QuickSort(A, left, pIndex-1);
        QuickSort(A, pIndex+1, right);
    }
}



void print(int * A, int len){
    for(int i = 0; i < len; i++){
        cout << A[i] << " ";
    }

    cout << endl;
}



int main(){
    int arr[10] = {23,3,23,3,21,1,3,42,4,315};
    int len = sizeof(arr)/sizeof(int);
    print(arr, len);
    QuickSort(arr, 0, len-1);
    print(arr, len);
}
