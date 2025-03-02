#include<bits/stdc++.h>
using namespace std;

void pr_binary(int index,char vec[],int size){
    if(index>=size){
        vec[index]='\0';
        cout<<vec<<" ";
        cout<<endl;
        return;
    }
    if(vec[index-1]=='1'){
        vec[index]='0';
    pr_binary(index+1,vec,size);
    }
    if(vec[index-1]=='0'){
    vec[index]='1';
    pr_binary(index+1,vec,size);
    vec[index]='0';
    pr_binary(index+1,vec,size);
    }
    return;
}
void sub_seq(int size){
    if(size<=0){
        return;
    }
    char vec[size+1];
    vec[0]='0';
    pr_binary(1,vec,size);
    vec[0]='1';
    pr_binary(1,vec,size);
    return ;
}
int main()
{
    int k=3;
   sub_seq(k);
   return 0;
}
