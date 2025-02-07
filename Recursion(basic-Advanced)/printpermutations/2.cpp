#include<bits/stdc++.h>
using namespace std;
void printper(vector<int> &vec,vector<int>&cur ,vector<vector<int>> &res,vector<int> &v){
    if(cur.size()==vec.size() ){
        res.push_back(cur);
        return ;
    }
    for(int i=0;i<vec.size();i++){
        if(v[i]==-1){
            v[i]=0;
            cur.push_back(vec[i]);
            printper(vec,cur,res,v);
            cur.pop_back();
            v[i]=-1;
        }
            
    }
}
void perswap(int ind,vector<int>&vec,vector<vector<int>>&res){
    if(ind==vec.size()){
        res.push_back(vec);
        return ;
    }
    for(int i=ind;i<vec.size();i++){
        swap(vec[i],vec[ind]);
        perswap(ind+1,vec,res);
        swap(vec[i],vec[ind]);
    }
}
int main(){
    vector<int>vec={1,2,3};
    vector<vector<int>>res;
    vector<int>v(vec.size(),-1);
    vector<int>cur;
    //printper(vec,cur,res,v);
    perswap(0,vec,res);
    for(auto val:res){
        for(auto c:val){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}