#include<iostream>
using namespace std;

int main(){
     

                // Q1
    // int n;
    // cout << "enter the number of rows :" << " ";
    // cin >> n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         if(i==j || ((i+j)%2==0)){
    //             cout << "1";
    //         }
    //         else{
    //             cout << "0";
    //         }
    //     }
    //     cout << endl;
    // }


                  // Q2 :-- RhombusPattern
    // int n;
    // cout << "enter the number of rows :" << " ";
    // cin >> n;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout << "   ";
    //     }
    //     for(int j=1;j<=n-1;j++){
    //         cout << " * ";
    //     }
    //     for(int j=1;j<=i-1;j++){
    //         cout << "   ";
    //     }
    //     cout << endl;
    // }



    int n;
    cout << "enter the number of rows :" << " ";
    cin >> n;
    int a=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        for(int j=i;j>=1;j--){
            cout << j;
        }
        for(int j=2;j<=i;j++){
            cout << j;
        }
        for(int j=1;j<=((2*i)-1);j++){
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}