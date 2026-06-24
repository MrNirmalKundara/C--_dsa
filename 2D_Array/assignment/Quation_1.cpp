#include<iostream>
using namespace std;

void search(int arr[][3],int n,int m,int key){
    int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j] == key){
                   count++;
                }
            }
        }
        cout << "count of all 7 is : " << count << endl;
    }

int main(){
    int arr[2][3] = {{4,7,8},{8,8,7}};
    int n = 2,m = 3;

    search(arr,n,m,7);
    return 0;
}