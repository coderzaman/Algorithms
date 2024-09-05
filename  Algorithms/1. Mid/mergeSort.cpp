#include<bits/stdc++.h>
using namespace std;

void MergeSort(int *A, int left, int right){
    if(left < right){
        int mid = (left + right)/2;
        MergeSort(A, left, mid);
        MergeSort(A, mid+1, right);
        Merge(left, mid, right);
    }
}

void Merge(int * A, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2]

    for(int i = 0; <n1; i++){
        L[i] = A[left+i];
    }

    for(int i = 0; <n2; i++){
        L[i] = A[mid+1+j];
    }

    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2){
        if(L[i] < M[j]){
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

    while(j < n1){
        A[k] = L[j];
        i++;
        k++;
    }
}


int main(){
}
