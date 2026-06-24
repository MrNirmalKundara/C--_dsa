#include<iostream>
using namespace std;

        // it is type of polymorship is function overloading.(compile time polymorship)
// class print {
//    public:
//       void show(int x){
//           cout << "int : " << x << endl;
//       }
      
//       void show(string name){
//         cout << "Name is : "<< name << endl;
//       }
// };

        // it is type of polymorship is operator overloading(compile time polymorship)
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
        int resReal = this->real + com2.real;
        int resImg = this->img + com2.img;
        complex com3(resReal,resImg);
        cout << "result through opeerater overloading = " ;
        com3.showNum();
        return com3;
    }
};
int main(){
    // print obj1;
    // obj1.show(20243029);
    // obj1.show("Nirmal Kunadar");

    complex com1(2,4);
    complex com2(5,3);

    com1.showNum();
    com2.showNum();

    complex com3 = com1+com2;
    // com3.showNum();
    return 0;
}