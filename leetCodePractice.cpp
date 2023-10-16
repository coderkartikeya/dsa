#include <iostream>
using namespace std;
int digit(int &n){
    int digit=n%10;
    n=n/10;
    return digit;
}

int main(){
    int n=19;
    int m=n;
        while(n!=1){
            while(m!=0){
                int d=digit(m);
                n=n+d*d;
            }
            
            

        }
    if(n==1){
        cout<<"lol"<<endl;
    }
    else{
        cout<<"dhol"<<endl;
    }
}