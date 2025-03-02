#include<bits/stdc++.h>
using namespace std;
bool issafe(int  row,int col,vector<string>&board,int n){
    int duprow=row;
    int dupcol=col;
    while(row>=0 && col>=0){
        if(board[row][col]=='Q'){
            return false;
        }
        row--;
        col--;
    }
    row=duprow;
    col=dupcol;
    while(col>=0){
        if(board[row][col]=='Q'){
            return false;
        }
        col--;
    }
    row=duprow;
    col=dupcol;
    while(row<n && col>=0){
        if(board[row][col]=='Q'){
            return false;
        }
        row++;
        col--;
    }
    return true;
}
void Nqueens(int col,vector<vector<string>>&res,vector<string>&board,int n){
    if(col==n){
        res.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(issafe(row,col,board,n)){
            board[row][col]='Q';
            Nqueens(col+1,res,board,n);
            board[row][col]='.';
        }
    }
}
int main(){
    int n=4;
    vector<vector<string>>res;
    vector<string>board(n);
    string s(n,'.');
    for(int i=0;i<n;i++){
        board[i]=s;
    }
    Nqueens(0,res,board,n);
    for(auto vec:res){
        for(auto val:vec){
            cout<<val<<endl;

        }
        cout<<endl<<"-------------------------------------"<<endl;
    }
    return 0;
}