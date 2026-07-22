#include<iostream>
using namespace std;

int mazeGame(int i,int j,int n,int m,string ans){
    if(i==n-1 && j==m-1){
        cout << ans << endl;
        return 1;
    }
    if(i>=n || j>=m){
        return 0;
    }
    // for right call
    
    int val1 = mazeGame(i,j+1,n,m,ans+'R');
    // for down call
    int val2 = mazeGame(i+1,j,n,m,ans+'D'); 
    return val1+val2;
}

int main(){
    int maze[4][4] = {{1,0,0,0},
                    {1,1,0,1},
                    {1,1,0,0},
                    {0,1,1,1}};
    cout << mazeGame(0,0,4,4,"") << endl;
    return 0;
}