#include<bits/stdc++.h>
using namespace std;
bool palindrome(string a){
	string k;
	k=a;
	reverse(a.begin(),a.end());
	if( a == k){
		return true;
	}
	return false;
}
int main(){
	string inp;
	inp="bcacbffgge";
	int n=inp.size();
	int count=0;
	int i=0;
	int j;
	while(i<n){
		for(j=i+1;j<n;j++){
			string temp=inp.substr(i,j-i+1);
			if(palindrome(temp)){
				count++;
				i=j+1;
				break;
			}
		}
		if(j==n){
			count++;
			i++;
		}
	}
	cout<<count-1;
	return 0;
}
