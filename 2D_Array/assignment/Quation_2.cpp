#include<iostream>
using namespace std;

int main(){
    int num[3][3] = {{1,4,9},{11,4,3},{2,2,3}};
    int n = 3,m=3;
    int sum = 0;

    for(int j=0;j<m;j++){
        cout << num[1][j] << " ";
        sum += num[1][j];
    }
    
    cout << "the sum of second row is : " << sum << endl;
    return 0;
}