#include<bits/stdc++.h>
using namespace std;

void Merge(int * A, int * B, int * C, int n, int n1, int n3){
    int i = 0, j = 0, k = 0;

    while(i < n && j < n1){
        if(A[i] < B[j]){
            C[k++] = A[i++];
        }else{
             C[k++] = B[j++];
        }
    }

    for(; i < n; i++){
        C[k] = A[i];
        k++;
    }
    for(; j < n; j++){
        C[k] = A[j];
        k++;
    }
}

int main(){
    int A[5] = {35 ,42, 45, 52,101};
    int B[5] = {3 ,4, 4, 5,10};
    int C[10];
    Merge(A,B,C,5,5,10);

    for(int i = 0; i<10; i++){
        cout << C[i] << " ";
    }
}
