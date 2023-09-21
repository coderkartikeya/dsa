#include <iostream>
using namespace std;

int main(){
    int* arr=new int[4];
    for(int i=0;i<4;i++){
        int n;
        cin>>n;
        arr[i]=n;

    }

    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }
}