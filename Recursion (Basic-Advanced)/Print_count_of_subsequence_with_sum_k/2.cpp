#include<bits/stdc++.h>
using namespace std;
int subsequence(int i,vector<int> &vec,int n,int k,int s)
{
    if(i>=n){
            if(s==k)
        {
            return 1;
            
       }
       else return 0;
    }
    s+=vec[i];
    int pick=subsequence(i+1,vec,n,k,s);
    s-=vec[i];
    int not_pick=subsequence(i+1,vec,n,k,s);
    return pick+not_pick;
}
int main(){
    vector<int>vec={1,2,3,4,5};
    cout<<subsequence(0,vec,vec.size(),5,0);
    return 0;
}
