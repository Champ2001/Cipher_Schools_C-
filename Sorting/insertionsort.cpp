#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[] , int size){
    for(int i = 0;i<size;i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    cout<<"ELements after being sorted : ";
    for(int i =0 ;i<size;i++){
        cout<<arr[i]<< " ";
    }
}

int main(){
    int arr[] = {4,2,6,3,9,8};
  int n = 6;
  insertionSort(arr, n);
  return 0;
}