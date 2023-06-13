#include<bits/stdc++.h>
using namespace std;
int lastOccurence(vector<int>v, int key){
    int size = v.size();
    int start = 0;
    int end = size-1;
    int ans=-1;

    while(start <= end ){
    int mid = (start+end)/2;

        if(v[mid] < key){
            start = mid+1;
        }
        else if(v[mid] > key){
            end = mid-1;
        }
        else {
            ans = mid;
            start = mid+1;
        }
    }
    return ans;
}
int firstOccurence(vector<int>v, int key){
    int size = v.size();
    int start = 0;
    int end = size-1;
    int ans=-1;

    while(start <= end ){
    int mid = (start+end)/2;

        if(v[mid] < key){
            start = mid+1;
        }
        else if(v[mid] > key){
            end = mid-1;
        }
        else {
            ans = mid;
            end = mid-1;
        }
    }
    return ans;
}
int main()
{
    vector<int>v1 = { 1, 2, 2, 2, 3, 3};
    vector<int>v = { 1, 2, 3, 4, 3, 3, 5};
    int n = v.size();
    int key = 3;
    int count = lastOccurence(v,key) - firstOccurence(v,key) +1;
    cout<<count;
    return 0;
}