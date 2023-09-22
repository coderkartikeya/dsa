#include <iostream>
#include <string>
using namespace std;
// void reverse(string &a,int i,int e){
//     cout<<a<<endl;
//     if(i==e){
//         return;
//     }
//     int temp=a[i];
//     a[i]=a[e];
//     a[e]=temp;
//     return reverse(a,i+1,e-1);

// }

// int power(int a,int b){
//     if(b==0){
//         return 1;
//     }
//     if(b%2==0){
//         return power(a,b/2)*power(a,b/2);
//     }
//     else{
//         return a*power(a,b/2)*power(a,b/2);
//     }
// }
//sorting bubble sort

void bubble(int *arr,int n){
    
    if(n==0|| n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble(arr,n-1);
}


int main(){
    // string name="kartikeya";
    // int len=name.size();
    // reverse(name,0,len-1);

    // int a=2;
    // int b=3;
    // cout<<power(2,4);
    int arr[5]={5,4,3,2,1};
    bubble(arr,5);
    for(int x:arr){
        cout<<x<<" ";
    }


}