#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0;i<n-1; i++){
        int mini = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    cout<<"Selection Sorted : " ;
    for(int i = 0 ;i<n;i++){
        cout<<arr[i] << " ";
    }
}

int main() {
  int arr[] = {4,2,6,3,9,8};
  int n = 6;
  selectionSort(arr, n);
  return 0;
}