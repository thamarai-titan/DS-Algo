#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n){

    for(int i = n-1;i >= 0;i--){

        for(int j = 0;j <= i-1;j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){

    int arr[] = {56, 45, 34, 23, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";    
    }
        return 0;
}