#include <iostream>
using namespace std;

// class Object{
//     static int count;
//     int num;
//     public:
//     Object(int n){
//         num=n;
//         ++count;
        


//     }
//     void print();

// };
// int Object::count=0;//defination should be done outside the class

// void Object::print(){
//     cout<<count<<endl;
// }
class complex{
    int real;
    int img;
    public:
    void valueset(int real,int img){
        this->real=real;
        this->img=img;

    }

    int getreal(){
        return real;

    }
    int getimg(){
        return img;
    }
    
    friend complex sum(complex c1,complex c2);
};
complex sum(complex c1,complex c2){
    complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    return c3;

}

int main(){
    
    complex c1,c2,c3;
    c1.valueset(2,3);
    c2.valueset(4,5);
    cout<<sum(c1,c2).getreal()<<" +  j"<<sum(c1,c2).getimg()<<endl;
    



}