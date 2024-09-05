#include<bits/stdc++.h>
using namespace std;

void Merge(int * A, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for(int i = 0; i < n1; i++){
        L[i] = A[i + left];
    }

    for(int i = 0; i < n2; i++){
        R[i] = A[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;

    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1){
         A[k] = L[i];
         i++;
         k++;
    }

    while(j < n2){
         A[k] = R[j];
         j++;
         k++;
    }

}


void MergeSort(int * A, int start, int end){
    if(start < end){
        int mid = (start + end)/2;
        MergeSort(A, start, mid);
        MergeSort(A, mid + 1, end);
        Merge(A, start, mid, end);
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
    MergeSort(arr, 0, len-1);
    print(arr, len);
}
