#include<bits/stdc++.h>
using namespace std;

void Merge(int * A, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1];
    int R[n2];

    for(int i = 0; i < n1; i++){
        L[i] = A[left+i];
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



void MergeSort(int * A, int left, int right){
    if(left < right){
        int mid = (left + right)/2;
        MergeSort(A, left, mid);
        MergeSort(A, mid+1, right);
        Merge(A, left, mid, right);
    }
}

void print(int * arr){
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[10] = {35,34,32,35,46,42,324,2,3,1};
    MergeSort(arr, 0, 9);
    print(arr);
}
