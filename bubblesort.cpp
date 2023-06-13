#include<bits/stdc++.h>
using namespace std;

void bubbleSort_unoptimised(int arr[], int size){
    for(int i = size-1;i > 0; i--){
        for(int j =0; j<i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"ELements after being sorted : ";
    for(int i =0 ;i<size;i++){
        cout<<arr[i]<< " ";
    }
}

void bubbleSort_optimised(int arr[], int size){
    for(int i=size-1;i>=0;i--){
        int didSwapped = 0;
        for(int j=0;j<i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]= temp;
                didSwapped = 1;
            }
        }
        if(didSwapped == 0 ){
            break;
        }
    }

    cout<<"ELements after being sorted : ";
    for(int i =0 ;i<size;i++){
        cout<<arr[i]<< " ";
    }
}

int main(){
    int arr[] ={4,7,9,5,3,25,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort_unoptimised(arr, size);
    bubbleSort_optimised(arr, size);
    }