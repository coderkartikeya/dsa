#include <iostream>
using namespace std;

void mergesort(int *arr,int s,int e){

    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    
    //left valla array
    mergesort(arr , s, mid);

    //right valla part 
    mergesort(arr,mid+1,e);

    merge(arr)





}

int main(){
    int arr[5]={5,4,3,2,2};

}