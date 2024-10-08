#include<iostream>
using namespace std;
bool palindrome(int i,int n,string s){
	if (i>=n){
		return true;
	}
	if(s[i] != s[n-1]) return false;
	return palindrome(i+1,n-1,s);
}
int main(){
	string s;
	cin>>s;
	int n=s.size();
	cout<<palindrome(0,n,s);
	return 0;
}