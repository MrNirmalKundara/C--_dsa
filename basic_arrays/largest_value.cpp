#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the length of Array : ";
    cin >> n;

    int arr[n];
    
    cout << "Enter the array values : " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    int m = sizeof(arr)/sizeof(int);

    for(int i=0;i<m;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i]<min){
           min = arr[i];
        }
    }
    cout << "largest no. is : " << max << endl;
    cout << "smallest No. is : " << min << endl;

    return 0;
}