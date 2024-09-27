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
	int ssmal=INT_MAX;
	int smal=arr[0];
	for(int i=1;i<a;i++){
		if(larg<arr[i]){
			slarg=larg;
			larg=arr[i];
		}
		else{
			if(arr[i]>slarg && arr[i]!=larg){
				slarg=arr[i];
			}
		}
		if(smal>arr[i]){
			ssmal=smal;
			smal= arr[i];
		}
		else{
			if( ssmal>arr[i] && arr[i]!=smal){
				ssmal=arr[i];
			}
		}
	}
	cout<<"second largest: "<<slarg<<endl;
	cout<<"second smallest: "<<ssmal;
	return 0;
}