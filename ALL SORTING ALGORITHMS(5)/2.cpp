#include<bits/stdc++.h>
using namespace std;


//INSERTION SORT

void selectionsort(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        int ind=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[ind]>arr[j]){
                ind=j;
            }
        }
            swap(arr[ind],arr[i]);
        
    }

}


//BUBBLE SORT IMPLEMENTATION

void bubblesort(vector<int> &arr)
{
    for(int i=arr.size()-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


//INSERTION SORT IMPLEMENTATION

void insertion(vector <int> &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=i;j>0;j--){
            if(arr[j]>arr[j-1]){
                break;
            }
            else{
                swap(arr[j],arr[j-1]);
            }
        }
    }
}

//QUICK SORT IMPLEMENTATION

int partition(int lb,int ub,vector <int> &arr){
    if (lb>=ub){
        return lb;
    }
    int pivot=lb;
    int start=lb;
    int end=ub;
    while(start<end){
        while(arr[start]<=arr[pivot])
        {
            start++;
        }
        while(arr[end]>arr[pivot]){
            end--;
        }
        if(start<end){
            swap(arr[start],arr[end]);
        }
    }
    if(start>end){
        swap(arr[pivot],arr[end]);
        pivot=end;
    }
    return pivot;
}
void quicksort(int i,int j,vector<int>&arr){
     if(i<j){
        int loc = partition(i,j,arr);
        quicksort(i,loc-1,arr);
        quicksort(loc+1,j,arr);
     }
}


//MERGE SORT IMPLEMENTATION

void merge(int low,int high,int mid,vector<int>&arr){
    vector<int>temp;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=low;k<=high;k++){
        arr[k]=temp[k-low];
    }
}
void mergesort(int i,int j,vector<int>&arr){
    if(i>=j){
        return;
    }
    int mid=(i+j)/2;    
    mergesort(i,mid,arr);
    mergesort(mid+1,j,arr);
    merge(i,j,mid,arr);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr.push_back(k);
    }
    quicksort(0,arr.size()-1,arr);
    for(auto val:arr){
        cout<<val<<" ";
    }
   
}
