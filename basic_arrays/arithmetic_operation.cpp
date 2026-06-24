#include<iostream>
using namespace std;

void printArray(int *ptr,int n){
    for(int i=0;i<n;i++){
        cout << *(ptr+i) << endl;
                   //or
        //   cout << *ptr << endl;
        //   ptr = ptr+1;
    }
}

int main(){
    int a = 12;
    int *ptr = &a;
    cout << ptr << endl;

          
             // increament and decreament in pointer
    // ptr++;
    // cout << ptr << endl;
    // ptr-- ;
    // cout << ptr << endl;

    // char ch = 'A';
    // char *cptr = &ch;
    // cout << (void*)cptr <<endl;
    // cptr++;
    // cout << (void*)cptr <<endl;
    // cptr--;
    // cout << (void*)cptr <<endl;

                // Arthimetic operation in pointer.
    // ptr = ptr + 3;
    // cout << ptr << endl;
    // ptr -= 3;
    // cout << ptr << endl;


    


                // printing all array value using pointer
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    printArray(arr,n);

    return 0;
}