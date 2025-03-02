#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>&v,int i){
    if(i==v.size()){
        return INT_MAX;
    }
    return min(v[i],fun(v,i+1));
}
int fun1(int i,vector<int>&v,int target){
    if(i==v.size()){
        return -1;
    }
    int ans=fun1(i+1,v,target);
    if(v[i]==target){
        return i;
    }
    else{
        return ans;
    }
}
int fun_last_occurence(int i,vector<int>&v,int target){
    if(i==v.size()){
        return -1;
    }
    int ans=fun_last_occurence(i+1,v,target);

    if(ans== -1){
        if(v[i]==target){
            return i;
        }
    }
    return ans;
}
void fun_all_indices(int i,vector<int>&v,set<int>&res,int target){
    if(i==v.size()){
        return ;
    }
    fun_all_indices(i+1,v,res,target);
    if(v[i]==target){
        res.insert(i+1);
    }
}
int main(){
    set<int>st;
    vector<int>v={12,12,12,12,12};
    fun_all_indices(0,v,st,1);
    if(st.empty()){
        cout<<"empty";
    }
    for(auto val:st){
        cout<<val<<" ";
    }
    return 0;
}
