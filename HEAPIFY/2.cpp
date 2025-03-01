#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>&v,int n,int i){
    int cur=i;
    int left=(2*i)+1;
    int right=(2*i)+2;
    if(left<n && v[cur]<v[left]){
        cur=left;
    }
    if(right<n && v[cur]<v[right]){
        cur=right;
    }
    if(i!=cur){
        swap(v[i],v[cur]);
        heapify(v,n,cur);
    }
}
void buildheap(vector<int>&v,int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(v,n,i);
    }
}
int main(){
     vector<int>v{1, 3, 5, 4, 6, 13, 10, 9, 8, 15,17};
    int n=v.size();
    int node=(n/2)-1;
    buildheap(v,n);
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}
