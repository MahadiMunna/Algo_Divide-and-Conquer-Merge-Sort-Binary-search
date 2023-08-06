#include <bits/stdc++.h>
using namespace std;

int search(vector<pair<int,int>> arr, int target) {
        int l=0;
        int r=arr.size()-1;
        int mid=(l+r)/2;
        while(true){
            if(l>r) break;
            else if(arr[mid].first==target) return arr[mid].second;
            else if(arr[mid].first<target){
                l=mid+1;
                mid=(l+r)/2;
            }
            else if(arr[mid].first>target){
                r=mid-1;
                mid=(l+r)/2;
            }
        }
        return -1;
    }

int main(){
    int n;cin>>n;
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        int num;cin>>num;
        arr.push_back({num,i});
    }
    int x;cin>>x;
    int index=search(arr,x);
    if(index==-1){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<index<<endl;
    }
    return 0;
}