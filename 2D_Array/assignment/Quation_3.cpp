#include<iostream>
using namespace std;

int main(){
    int row = 2,column = 3;
    int mat[2][3] = {{1,2,3},{4,5,6}};

    int transform[column][row] = {{0}};

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            transform[j][i] = mat[i][j];
        }
    }

    for(int j=0;j<column;j++){
        for(int i=0;i<row;i++){
            cout << transform[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}