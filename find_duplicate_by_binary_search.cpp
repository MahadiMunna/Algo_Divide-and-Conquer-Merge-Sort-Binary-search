#include <bits/stdc++.h>
using namespace std;

int search(int arr[],int n, int target) {
        int l=0;
        int r=n-1;
        int mid=(l+r)/2;
        while(true){
            if(l>r) break;
            else if(arr[mid]==target){
                if(arr[mid-1]==target||arr[mid+1]==target) return 1;
                else return 0;
            }
            else if(arr[mid]<target){
                l=mid+1;
                mid=(l+r)/2;
            }
            else if(arr[mid]>target){
                r=mid-1;
                mid=(l+r)/2;
            }
        }
        return -1;
    }

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;cin>>k;
    int flag=search(arr,n,k);
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}