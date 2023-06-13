#include<bits/stdc++.h>
using namespace std;

int peakElement(vector<int>&v ){
    int size = v.size();
    int start = 0;
    int end= size-1;

    while(start < end){
        int mid =start+( end - start)/2;

        if(v[mid] < v[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
    }
    return v[start];
}

int main(){
    vector<int>v = {1,5,10,4};
    cout<<peakElement(v);
}