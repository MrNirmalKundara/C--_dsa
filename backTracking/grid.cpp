#include<iostream>
using namespace std;

int gridways(int i,int j,int n,int m,string ans){
    if(i==n-1 && j==m-1){
        cout << ans << endl;
        return 1;
    }
    if(i>=n || j>=m){
        return 0;
    }
      // for right call
    int val1 = gridways(i,j+1,n,m,ans+'R');

      // for down call
      int val2 = gridways(i+1,j,n,m,ans+'D');
      return val1+val2;
}

int main(){
    int n=3;
    int m=3;
    string ans = "";

    cout << "Number of ways to reach the bottom-right corner: " << gridways(0,0,n,m,ans) << endl;
    return 0;
}