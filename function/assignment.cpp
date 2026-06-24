#include<iostream>
using namespace std;

       // Q1 :-- Write a function to check if a number is a palindrome in C++.
// int reverse(int n){
//     int rev = 0;
//     while(n>0){
//         int lastDigit = n%10;
//         rev = rev + lastDigit;
//         n = n/10;
//     }
//     return rev;
// }
// bool isPalindrome(int num){
//        int revnum = reverse(num);

//        if(revnum == num){
//         cout << "it is palindrome no.:";
//         return true;
//        }
//        else{
//         cout <<"it is not palindrome no. :";
//         return false;
//        }
// }


        // Q2 Write a function to calculate the sum of digits of a number
    // int sum(int n){
    //     int sum1 = 0;
    //     while(n>0){
    //         int lastDigit = n%10;
    //         sum1 = sum1 + lastDigit;
    //         n /= 10;
    //     }
    //     return sum1;
    // }


          // Q3 :-- Write a function which takes 2 numbers as parameters (a&b) and outputs: a^2+b^2+2*ab.
    // int hsqr(int a,int b){
    //     int hole_square = (a*a) + (b*b) + (2*a*b);
    //     return hole_square;
    // }
    
int main(){
    // isPalindrome(121);

    // cout << "number sum of digit is :" << sum(421);

    // cout << "hole square of a and b is :" << hsqr(2,3);
    return 0;
}