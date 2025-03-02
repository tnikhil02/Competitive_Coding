#include<bits/stdc++.h>
using namespace std;
void Tower_of_hanoi(int n,int s,int h,int d){
    if(n==0){
        return;
    }
    Tower_of_hanoi(n-1,s,d,h);
    cout<<"move  a disk from "<<s<<" to "<<d<<endl;
    Tower_of_hanoi(n-1,h,s,d);
}
int main(){
    Tower_of_hanoi(3,1,2,3);

    return 0;
}
