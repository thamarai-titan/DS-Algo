#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[], int n){
    for(int i = 0;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main(){

    int arr[] = {45, 34, 12, 46, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr, n);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}