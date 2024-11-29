//OBJ: Quick Sort algorithm 
#include <iostream>
using namespace std;
void quickSort(int arr[], int low, int high)
 {
    if (low >= high) return; // Base case: array is already sorted or empty
    int pivot = arr[high]; // Pick the last element as the pivot
    int i = low; // Pointer for smaller elements
    for (int j = low; j < high; j++) 
    {
        if (arr[j] < pivot) 
        {
            swap(arr[i], arr[j]); // Swap elements if they're smaller than pivot
            i++;
        }
    }
    swap(arr[i], arr[high]); // Place pivot in its correct position
    quickSort(arr, low, i - 1); // Sort the left side
    quickSort(arr, i + 1, high); // Sort the right side
}
int main()
 {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1); // Call quicksort on the whole array
    for (int i = 0; i < n; i++) // Print the sorted array
    {
        cout << arr[i] << " ";
    cout << endl;
    }
    return 0;
}