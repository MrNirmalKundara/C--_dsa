#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout << "enter the no. of rows : ";
    cin >> row;
    cout << endl;
    cout << "Enter the no. of column : ";
    cin >> column;
    cout << endl;

    int* *matrix = new int*[row];

    for(int i=0;i<row;i++){
        matrix[i] = new int[column];
    }

    int x =1;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            matrix[i][j] = x++;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << matrix[2][2] << endl;
    cout << *(*(matrix+2)+2)<< endl; 
    return 0;
}