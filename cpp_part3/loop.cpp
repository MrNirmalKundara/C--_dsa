#include<iostream>
using namespace std;

int main(){
            // loop == for(initialisation; condition; updation){ so some work}
        // int n = 10;
        // for(int i=1;i<=10;i++){
        //     cout << i <<endl;
        // }

        // for(int i=0;i<=5;i++){
        //     cout << "apna college" <<endl;
        // }
        
        // int sum = 0;
        // for(int i=1;i<=10;i++){
        //     sum = sum + i;
        // }
        // cout << "sum : " << sum <<endl;


                  // while loop
        // int count = 1;
        // while(count <= 10){
        //     cout << count << endl;
        //     count++;
        // }


                // do-while loop
        int num = 1;
        do{
            cout << num<<endl;
            num++;
        } while(num<6);

          // difference between do-while loop and while loop

        int val = 2;
        do{
            cout << "i am nirmal 1" << endl ;
        } while(val>4);

        while(val>4){
            cout << "i am nirmal 2";
        }

            //   break statement
        int num1 = 2;
        while(num1<= 10){
            if(num1 == 4){
                break;
            }
            cout << num1 << endl;
            num1++;
        }



            //   continue statement
        int num2 ;
        for(int num2=0; num2<=20; num2++){
            if(num2 == 4){
                continue;
            }
            cout << num2 << endl;
        }
     return 0;
}