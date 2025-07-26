#include <iostream> // For input and output
using namespace std;

// Function to merge two sorted subarrays
// arr[left..mid] and arr[mid+1..right]
void merge(int arr[], int left, int mid, int right) {
    // Sizes of the two subarrays
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0;      // Initial index of first subarray
    int j = 0;      // Initial index of second subarray
    int k = left;   // Initial index of merged subarray

    // Compare elements of L and R, and put the smaller one into arr
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    // Copy the remaining elements of L[], if any
    while (i < n1)
        arr[k++] = L[i++];

    // Copy the remaining elements of R[], if any
    while (j < n2)
        arr[k++] = R[j++];
}

// Function to implement merge sort recursively
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Find the middle point
        int mid = left + (right - left) / 2;

        // Recursively sort the first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

// Utility function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function to test the merge sort implementation
int main() {
    // Initialize the array
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate number of elements

    // Print original array
    cout << "Original array: ";
    printArray(arr, n);

    // Perform merge sort
    mergeSort(arr, 0, n - 1);

    // Print sorted array
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}