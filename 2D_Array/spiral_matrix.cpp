#include<iostream>
using namespace std;

void spiral_matrix(int matrix[][4],int n,int m){
    int sr = 0,sc=0;
    int er = n-1,ec = m-1;
    while((sr <= er) && (sc <= ec)){
        // for top corner
        for(int i=sc;i<=ec;i++){
            cout << matrix[sr][i] << " ";
        }

        // for right corner
        for(int j=sr+1;j<=er;j++){
            cout << matrix[j][ec] << " ";
        }
        
        // for bottom corner
        for(int i=ec-1;i>=sc;i--){
            if(sr == er){
                break;
            }
             cout << matrix[er][i] << " ";
        }

        // for left corner
        for(int j=er-1;j>=sr+1;j--){
            if(sc == ec){
                break;
            }
            cout << matrix[j][sc] << " ";
        }

        sr++,sc++;
        er--,ec--;
    }
}

int main(){
    // int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // int n=4,m=4;

    int matrix[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int n=3,m=4;

    spiral_matrix(matrix,n,m);
    return 0;
}