#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &s,int start,int end){
    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
void fun(int ind,string &v,vector<string>&cur,vector<vector<string>>&res){

    if(ind==v.size()){
        res.push_back(cur);
        return ;
    }
    for(int i=ind;i<v.size();i++){
        if(palindrome(v,ind,i)){
            string s=v.substr(ind,i-ind+1);
            cur.push_back(s);
           fun(i+1,v,cur,res);
           cur.pop_back();
        }
        
    }
}
int main(){

    string v="aabc";
    vector<string>cur;
    vector<vector<string>>res;
    fun(0,v,cur,res);
    for(auto vec:res){
        for(auto val:vec){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}