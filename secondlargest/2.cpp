#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int arr[a];
	for(int i=0;i<a;i++){
		int x;
		cin>>x;
		arr[i]=x;
	}
	int larg=arr[0];
	int slarg=INT_MIN;
	for(int i=1;i<a;i++){
		if(larg<arr[i]){
			slarg=larg;
			larg=arr[i];
		}
		else{
			if(arr[i]>slarg){
				slarg=arr[i];
			}
		}
	}
	cout<<"largest: "<<larg<<endl;
	cout<<"second largest: "<<slarg;
	return 0;
}