#include<iostream>
using namespace std;

int main(){

    // int n;
    // cout << "enter the no. of rows" << endl;
    // cin>> n;
    // int m;
    // cout << "enter the no. of columns" << endl;
    // cin>> m;
    
    //    // outer loop
    // for(int i=1;i<=n;i++){
    //          // inner loop
    //     for(int j=1;j<=m;j++){
    //         cout << i;
    //     }
    //     cout << endl;
    // }


            //  star pattern
    // int n;
    // cout << "enter the no. of rows" << endl;
    // cin>> n;
    
    //    // outer loop
    // for(int i=1;i<=n;i++){
    //          // inner loop
    //     for(int j=1;j<=i;j++){
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }


          // inverted loop 
                  // method 1
    // int n;
    // cout << "enter the no. of rows" << endl;
    // cin>> n;
    
    // int m = n;
    //    // outer loop
    // for(int i=1;i<=n;i++){
    //          // inner loop
    //     for(int j=m;j>=1;j--){
    //         cout << " * ";
    //     }
    //     m--;
    //     cout << endl;
    // }

          // method 2
    // int n ;
    // cout << "enter the number of rows :" << endl;
    // cin >> n;
    
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++){
    //         cout << "*" ;
    //     }
    //     cout << endl;
    // }


            // half pyramid pattern
    // int n ;
    // cout << "enter the number of rows :" << endl;
    // cin >> n;
    
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << j ;
    //     }
    //     cout << endl;
    // }

           
              // character pyramid
    // int n ;
    // cout << "enter the number of rows :" << endl;
    // cin >> n;
    // char ch = 'A';
    
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout << ch++ ;  // post increament
    //     }
    //     cout << endl;
    // }


                // hollow rectangle pattern
    // int n ;
    // cout << "enter the number of rows :" << endl; 
    // cin >> n;
    
    // for(int i=1;i<=n;i++){
    //     cout << " * ";
    //     for(int j=2;j<=n-1;j++){
    //         if(i==1 || i==n){
    //             cout << " * ";
    //         }
    //         else{
    //             cout << "   ";
    //         }
    //     }
    //     cout << " * " << endl;
    // }

         
                 // inverted and rotated half pyramid pattern
                //   method 1
    // int n ;
    // cout << "enter the number of rows :" << endl; 
    // cin >> n;
    
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i+j>n){
    //             cout << " * ";
    //         }
    //         else{
    //             cout << "   ";
    //         }
    //     }
    //     cout << endl;
    // }

                  // method 2
    // int n ;
    // cout << "enter the number of rows :" << endl; 
    // cin >> n;
    
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //        cout << "   ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }



                       // floyd's triangle 
    // int n ;
    // cout << "enter the number of rows :" << endl; 
    // cin >> n;
    // int a = 1;
    
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout <<"       "<< a++;
    //     }
    //     cout << endl;
    // }

          
                  // full pyramidal
    // int n ;
    // cout << "enter the number of rows :" << endl; 
    // cin >> n;
    
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //        cout << "   ";
    //     }
    //     for(int j=1;j<=((2*i)-1);j++){
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }


              // diamond pyramid
    int n ;
    cout << "enter the number of rows :" << endl; 
    cin >> n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
           cout << "   ";
        }
        for(int j=1;j<=((2*i)-1);j++){
            cout << " * ";
        }
        cout << endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
           cout << "   ";
        }
        for(int j=1;j<=((2*i)-1);j++){
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}