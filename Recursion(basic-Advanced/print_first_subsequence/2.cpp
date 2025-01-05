#include<bits/stdc++.h>
using namespace std;
bool subsequence(int i,vector<int> &a,vector<int> &vec,int n,int k,int s)
{
    if(i>=n){
            if(s==k)
        {
            for(auto val:a)
            {
            cout<<val<<" ";
            }
            cout<<endl;
            return true;
       }
       else 
        return false;
    }
    a.push_back(vec[i]);
    s+=vec[i];
    if(subsequence(i+1,a,vec,n,k,s)==true){return true;}
    a.pop_back();
    s-=vec[i];
    if(subsequence(i+1,a,vec,n,k,s)==true) {return true;}
    return false;
}
int main(){
    vector<int>vec={1,2,3};
    vector<int>vec1;
    subsequence(0,vec1,vec,vec.size(),3,0);
    return 0;
}
