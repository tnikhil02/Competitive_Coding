#include<bits/stdc++.h>
using namespace std;
void subsequence(int i,vector<int>&a,vector<int> &vec,int n)
{
    if(i>=n){
           for(auto val:a){
            cout<<val<<" ";
           }
           cout<<endl;
           return;
    }
    a.push_back(vec[i]);
    subsequence(i+1,a,vec,n);
    a.pop_back();
    subsequence(i+1,a,vec,n);
}
int main(){
    vector<int>vec={1,2,3,4,5};
    vector<int>a;
    subsequence(0,a,vec,vec.size());
    return 0;
}
