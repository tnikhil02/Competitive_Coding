#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<string> inp;
	unordered_map<string,vector<string>>hash;
	for(int i=0;i<n;i++){
		string a;
		cin>>a;
		inp.push_back(a);
	}
	for(auto val:inp){
		string sorttemp;
		sorttemp=val;
		sort(sorttemp.begin(),sorttemp.end());
		hash[sorttemp].push_back(val);
	}
	for(auto val:hash){
		for(auto res :val.second){
			cout<<res<<" ";
		}
		cout<<endl;
	}

	
	return 0;
}