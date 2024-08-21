#include<iostream>
#include<vector>
using namespace std;
void printsolution(vector<vector<char>>board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool issafe(int row,int col,vector<vector<char>>board,int n){
    // Check row 
     int i=row;
     int j=col;
    // Check row
    while(j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
    }
    // Upper left  Diagonal
     i=row;
     j=col;
    while(i>=0&&j>=0){
         if(board[i][j]=='Q'){
            return false;
        }
        j--;
        i--;
    }
    // Down left Diagonal
     i=row;
     j=col;
    while(i<n&&j>=0){
    if(board[i][j]=='Q'){
            return false;
        }
        j--;
        i++;
    }
}


void solve(vector<vector<char>>board,int col,int n){
    // BAse case
    if(col>=n){
        printsolution(board,n);
        cout<<endl;
        return ;
    }

    // Ek case solve karo baaki recursion sambhal lega 
    // ek case Q1 ko sab jagah place kardo 
    for(int row=0;row<n;row++){
        if(issafe(row,col,board,n)){
            // rakh do 
            board[row][col]='Q';
            // Baaki recursion sol layega 
            solve(board,col+1,n);
            // Backtracking
            board[row][col]='-';
        }
    }

}
int main ()
{int n=6;
vector<vector<char>>board(n,vector<char>(n,'-'));
// Col zero to col max tak jayegi 

int col=0;
solve(board,col,n);
 return 0;
}