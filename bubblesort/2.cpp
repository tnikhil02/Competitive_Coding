#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    for(int i=n-1;i>0;i--){
    	for(int j=0;j<=i-1;j++){
    		if(arr[j]>arr[j+1]){
    			swap(arr[j],arr[j+1]);
    		}
    	}
    }
    for(auto val:arr){
    	cout<<val<<"  ";
    }
    return 0;
}