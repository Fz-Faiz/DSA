#include <iostream>
using namespace std;

void Heapify(int arr[], int index, int n) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < n && arr[left] > arr[largest]) largest = left;
    if (right < n && arr[right] > arr[largest]) largest = right;

    if (largest != index) {
        swap(arr[largest], arr[index]);
        Heapify(arr, largest, n);
    }
}

void BuildMaxHeap(int arr[], int n) {
    // Step down
    for (int i = n / 2 - 1; i >= 0; i--) {
        Heapify(arr, i, n);
    }
}

void printHeap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sortArray(int arr[],int n){
    for(int i=n;i>0;i--){
        swap(arr[i],arr[0]);
        Heapify(arr,0,i);
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 7, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]); // Dynamically calculate the size of the array

    BuildMaxHeap(arr, n);
    sortArray(arr,n); // Use dynamic size
    printHeap(arr, n);    // Use dynamic size
}
