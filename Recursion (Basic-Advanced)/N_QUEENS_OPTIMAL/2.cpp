#include<bits/stdc++.h>
using namespace std;
// bool issafe(int  row,int col,vector<string>&board,int n){
//     int duprow=row;
//     int dupcol=col;
//     while(row>=0 && col>=0){
//         if(board[row][col]=='Q'){
//             return false;
//         }
//         row--;
//         col--;
//     }
//     row=duprow;
//     col=dupcol;
//     while(col>=0){
//         if(board[row][col]=='Q'){
//             return false;
//         }
//         col--;
//     }
//     row=duprow;
//     col=dupcol;
//     while(row<n && col>=0){
//         if(board[row][col]=='Q'){
//             return false;
//         }
//         row++;
//         col--;
//     }
//     return true;
// }
void Nqueens(int col,vector<vector<string>>&res,vector<string>&board,int n,unordered_set<int>&left_str,unordered_set<int>&lower_diag,unordered_set<int>&upper_diag){
    if(col==n){
        res.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(left_str.find(row)==left_str.end() && 
            lower_diag.find(row+col)==lower_diag.end() && 
            upper_diag.find((n-1)+row-col)==upper_diag.end()){
            board[row][col]='Q';
            left_str.insert(row);
            lower_diag.insert(row+col);
            upper_diag.insert((n-1)+row-col);

            Nqueens(col+1,res,board,n,left_str,lower_diag,upper_diag);
            board[row][col]='.';
            left_str.erase(row);
            lower_diag.erase(row+col);
            upper_diag.erase((n-1)+row-col);
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
    unordered_set<int>left_str;
    unordered_set<int>lower_diag;
    unordered_set<int>upper_diag;
    Nqueens(0,res,board,n,left_str,lower_diag,upper_diag);
    for(auto vec:res){
        for(auto val:vec){
            cout<<val<<endl;

        }
        cout<<endl<<"-------------------------------------"<<endl;
    }
    return 0;
}