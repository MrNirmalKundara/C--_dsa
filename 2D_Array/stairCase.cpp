#include<iostream>
using namespace std;

bool stairCase_sort(int mat[][4],int n, int m,int key){
    int i = 0, j = n-1;
    while(i<n && j>=0){
        if(mat[i][j] == key){
            cout << "fount a cell is : " << "(" << i << "," << j << ")";
            return true;
        }
        else if(mat[i][j] < key){
             i++;
        }
        else{
            j--;
        }
     }
     cout << "the cell is  not found : " << endl;
     return false;
}

int main(){
    int mat[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int n = 4;
    int m = 4;

    stairCase_sort(mat,n,m,35);
    return 0;
}