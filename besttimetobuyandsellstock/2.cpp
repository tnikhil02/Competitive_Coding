#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>inp;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		inp.push_back(x);
	}
	int cost=0,ovcost=0,min_so_far=inp[0];
	for(int i=1;i<n;i++){
		min_so_far=min(min_so_far,inp[i-1]);
		if(min_so_far>inp[i]){
			continue;
		}
		cost=inp[i] - min_so_far;
		ovcost=max(ovcost,cost);
	}
	cout<<ovcost;
	return 0;
}