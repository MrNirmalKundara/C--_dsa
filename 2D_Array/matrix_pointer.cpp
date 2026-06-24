#include<iostream>
using namespace std;

int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n = 3;

    cout << mat << " = " << &mat[0][0] << endl;
    cout << mat+1 << " != " << &mat[0][1] << endl;
    cout << mat+1 << " = " << &mat[1][0] << endl;

    cout << *(*(mat+2)+2);
     return 0;
}