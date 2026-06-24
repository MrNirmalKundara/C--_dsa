#include<iostream>
using namespace std;

class complex{
   float real,img;

   public:
    complex(float r,float i){
        real = r;
        img = i;
    }

    void showNum(){
        cout << real << "+" << img << "i" << endl;
    }
   
    complex operator +(complex &com2){
        float resReal = this->real - com2.real;
        float resImg = this->img - com2.img;
        complex com3(resReal,resImg);
        com3.showNum();
    } 
};
int main(){
    complex com1(6,9);
    complex com2(5,4);

    com1.showNum();
    com2.showNum();

    complex com3 = com1+com2;
    return 0;
}