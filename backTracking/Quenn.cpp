#include<iostream>
#include<vector>
using namespace std;

void printbroad(vector<vector<char>> broad,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << broad[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-----------------" << endl;
}

bool isSafe(vector<vector<char>> broad,int row,int col){
    int n = broad.size();
     // check for horizontal 
    for(int j=0;j<n;j++){
        if(broad[row][j] == 'Q'){
            return false;
        }
    }

        // check for vertical
    for(int i=0;i<n;i++){
        if(broad[i][col]=='Q'){
            return false;
        }
    }

      // check for left diagonal
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(broad[i][j]=='Q'){
            return false;
        }
    }

      // check for right diagonal
    for(int i=row,j=col;i>=0 && j<n;i--,j++){
        if(broad[i][j]=='Q'){
            return false;
        }
    }

    return true;
}

int solveNQueens(vector<vector<char>> &broad,int row){
    int n = broad.size();
    int count = 0;
    if(row==n){
        printbroad(broad,n);
        cout << endl;
        return 1;
    }
    for(int j=0;j<n;j++){
        if(isSafe(broad,row,j)){
          broad[row][j] = 'Q';
          count +=solveNQueens(broad,row+1);
          broad[row][j] = '.';   
        }
    } 
    return count;
}

int main(){
    vector<vector<char>> broad;
    int n=4;
 
    for(int i=0;i<n;i++){
        vector<char> rows;
        for(int j=0;j<n;j++){
            rows.push_back('.');
        }
        broad.push_back(rows);
    }

    int count = solveNQueens(broad,0);
    cout << "Total number of solutions: " << count << endl;
    return 0;
}