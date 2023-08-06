#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int l, int r, int mid){
    int left_size = mid-l+1;
    int L[left_size+1];

    int right_size = r-mid;
    int R[right_size+1];

    for(int i=l,j=0;i<=mid;i++,j++){
        L[j] = arr[i];
    }
    for(int i=mid+1,j=0;i<=r;i++,j++){
        R[j] = arr[i];
    }
    L[left_size] = INT_MIN;
    R[right_size] = INT_MIN;

    int lp=0,rp=0;
    for(int i=l;i<=r;i++){
        if(L[lp]>=R[rp]){
            arr[i]=L[lp];
            lp++;
        }
        else{
            arr[i]=R[rp];
            rp++;
        }
    }
}
void mergeSort(int arr[],int l,int r){
    if(l==r){
        return;
    }
    int mid = (l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,r,mid);
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}