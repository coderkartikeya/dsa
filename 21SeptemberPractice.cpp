#include <iostream>
using namespace std;
// bool check(int l,int *arr,int i){
//     if(i==l){
//         return 1;
//     }
//     else if(arr[i]>arr[i+1]){
//         return 0;
//     }

//     return check(l,arr,i+1);

    
// }
//finding the sum of the elements 
// int sum(int *arr,int n){
//     if(n==0){
//         return arr[0];
//     }
//     arr[n-2]+=arr[n-1];
//     return sum(arr,n-1);
// }
//linear search



// bool linearSearch(int *arr,int n,int target,int i){
//     if(n==0){
//         return 0;

//     }
//     if(arr[i]==target){
//         return 1;
//     }
//     return linearSearch(arr+1,n-1,target,i+1); 

// }
//binary search
int binarySearch(int *arr,int target,int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i];
        
    }
    cout<<endl;
    int mid=s+(e-s)/2;
    if(s>e){
        return 0;
    }
    if(arr[mid]==target){
        return 1;
    }

    else if(arr[mid]>target){
        return binarySearch(arr,target,s,mid-1);
    }
    else if(arr[mid]<target){
        return binarySearch(arr,target,mid+1,e);
    }
    return 0;

};
int main(){
    int arr[5]={1,3,2,4,5};
    // if(check(5,arr,0)){
    //     cout<<"sorted"<<endl;
    // }
    // else{
    //     cout<<"not a sorted array"<<endl;
    // }
    // cout<<sum(arr,5)<<endl;
    // cout<<linearSearch(arr,5,1,0);
    binarySearch(arr,1,0,4);



}