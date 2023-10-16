#include <iostream>
using namespace std;

void merge(int *arr, int s, int e) {
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];

    int main = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[s++];
    }
    int maxindex = mid + 1;
    for (int j = 0; j < len2; j++) {
        second[j] = arr[maxindex++];
    }

    int index1 = 0;
    int index2 = 0;
    int mainArray = s;
    while (index1 < len1 && index2 < len2) {
        if (first[index1] >= second[index2]) {
            arr[mainArray] = second[index2];
            index2++;
            mainArray++;
        } else {
            arr[mainArray] = first[index1];
            index1++;
            mainArray++;

        }
    }
    // while (index1 < len1) {
    //     arr[mainArray++] = first[index1++];
    // }
    // while (index2 < len2) {
    //     arr[mainArray++] = second[index2++];
    // }
    
}

void mergesort(int *arr, int s, int e) {
    if (s >= e) {
        return;
    }
    int mid = s + (e - s) / 2;

    // left valla array
    mergesort(arr, s, mid);

    // right valla part
    mergesort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main() {
    int arr[5] = {5,4,3,2,1};
    mergesort(arr, 0, 4);
    for (int x : arr) {
        cout << x << " ";
    }
}
