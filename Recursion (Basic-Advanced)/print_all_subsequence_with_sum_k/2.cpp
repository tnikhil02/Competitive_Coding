#include<bits/stdc++.h>
using namespace std;
void subsequence(int i,vector<int> &a,vector<int> &vec,int n,int k,int s)
{
    if(i>=n){
            if(s==k)
        {
            for(auto val:a)
            {
            cout<<val<<" ";
            }
            cout<<endl;
            
       }
       return;
    }
    a.push_back(vec[i]);
    s+=vec[i];
    subsequence(i+1,a,vec,n,k,s);
    a.pop_back();
    s-=vec[i];
    subsequence(i+1,a,vec,n,k,s);
}
int main(){
    vector<int>vec={1,2,3,4,5};
    vector<int>vec1;
    subsequence(0,vec1,vec,vec.size(),5,0);
    return 0;
}
