#include<bits/stdc++.h>
using namespace std;
int const mod=1e9+7;
long long power(int x,int y){
    if(y==0){
        return 1;
    }
    if(y%2==0){
        return power((x*x)%mod,y/2);
    }
    else{
        return x*power(x,y-1)%mod;
    }
}
int main(){
    int x,y;
    cin>>x>>y;
    long long res=power(x,y);
    cout<<res<<"\n";
}
