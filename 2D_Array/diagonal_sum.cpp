#include<iostream>
using namespace std;

        // time complexity :  O(n*n)
// int diagonal_sum(int mat[][3],int n){
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                sum += mat[i][j];
//             }
//             else if(j==(n-1-i)){
//                 sum += mat[i][j];
//             }
//         }
//     }
//     cout << "sum of diagonal is : "<< sum;
//     return sum;
// }

        // time complexity :-- O(n)
int diagonal_sum(int mat[][3],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += mat[i][i];
        if(i != n-1-i){
            sum += mat[i][n-1-i];
        }
    }
    cout << "sum of diagonal is : "<< sum;
    return sum;
}

int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n = 3;

    diagonal_sum(mat,n);
    return 0;
}