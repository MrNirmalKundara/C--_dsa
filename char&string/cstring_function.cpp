#include<iostream>
#include<cstring>
using namespace std;

int main(){ 

          // for copy 
    // char str1[50];
    // cout << strlen(str1) << endl;

    // strcpy(str1,"I am Nirmal Kundara");
    // cout << str1 << endl;
    // cout << strlen(str1) << endl;

    // char str2[] = "I from Kota rajasthan";
    // cout << strcpy(str1,str2) << endl;
    // cout << str1 << endl;

          // for join the string
    // char str1[] = "hello";
    // char str2[] = " india";
    // strcat(str1,str2);
    // cout << str1 << endl;

         // for comparation
    char str1[] = "abcd";
    char str2[] = "abcd";
    char str3[] = "xyz";
    char str4[] = "z";
    cout << strcmp(str1,str2) << endl;
    cout << strcmp(str1,str3) << endl;
    cout << strcmp(str3,str1) << endl;
    cout << strcmp(str3,str4) << endl;

    
    return 0;
}
