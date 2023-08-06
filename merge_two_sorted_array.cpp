#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[],int m,int arr2[],int n,int arr3[]){
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (arr1[i] >= arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < m) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

int main(){
    int m;cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    int n;cin>>n;
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int arr3[m+n];
    merge(arr1,m,arr2,n,arr3);
    for(int i=0;i<m+n;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}