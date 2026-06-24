#include<iostream>
using namespace std;

         // static Variable in simple function
// void counter(){
//     static int count = 0;
//     count++;
//     cout << "count : " << count << endl;
// }



         // static variable in class
// class Example{
//     public: 
//       static int x; 
// };
// int Example :: x=1;



        // static object
class Example{
   public:
     Example(){
        cout << "constractor...\n";
     }
     
     ~Example(){
        cout << "deconstractor...\n";
     }
};
int main(){
    // counter();
    // counter();
    // counter();

    // Example eg1;
    // Example eg2;
    // Example eg3;
    // cout << eg1.x++ << endl;
    // cout << eg2.x++ << endl;
    // cout << eg3.x++ << endl;


    int a=0;
    if(a==0){
       static Example eg1;
    }

    cout << "code ending....\n";
    return 0;
}