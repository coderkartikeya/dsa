#include <iostream>
using namespace std;

// Function to partition the array
int partition(int *arr, int s, int e) {
    int count = 0;
    int pivot = arr[s];

    for (int i = s + 1; i <= e; i++) {
        if (arr[i] < pivot) {
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex) {
        
        
        while (arr[i] <= pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

// Function to perform QuickSort
void quickSort(int *arr, int s, int e) {
    if (s >= e) {
        return;
    }
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main() {
    int arr[10] = {4,5,5,5,5,9,1,1};
    quickSort(arr, 0, 9);
    for (int x : arr) {
        cout << x << " ";
    }
}
