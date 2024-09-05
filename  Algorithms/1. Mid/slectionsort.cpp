#include<bits/stdc++.h>
using namespace std;

void selectionSort(int * A, int n){
    for(int i = 1; i < n; i++){ // n
        int key = A[i]; // n-1
        int hole = i - 1;// n-1

        while(hole >= 0 && key < A[hole]){ // n-1 //For worst case
            A[hole + 1] = A[hole]; // n-1
            hole--; // n-1
        }
        hole++; // n-1
        A[hole] = key;// n-1
    }
}

void print(int * A, int n){
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[7] = {13,1,3,41,2,24,12};
    selectionSort(arr,7);
    print(arr,7);
}
