#include <iostream>
using namespace std;

int main()
 {
    int a[] = {64, 25, 12, 22, 33, 1 , 0, 5, 11, 13, 6, 7, 99, 736, 0};  // Example array
    int n = sizeof(a)/sizeof(a[4]);  // Calculate the number of elements in the array
    
    // Selection sort
    for (int i = 0; i < n; i++) 
    {
     //   int min_index = i;  // Assume the current element is the minimum
        
        // Find the smallest element in the unsorted part of the array
        for (int j = i+1; j < n; j++)
         {
            if (a[j] < a[i]) 
            {
              //  min_index = j;  // Update min_index if a smaller element is found
                 int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            }
        }
       } 
        // Swap the found minimum element with the element at index i
    // Print sorted array
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}
/* 
Variable Naming Techniques: 
    1. snake_case
    2. camelCase
    3. PascalCase 
    4. shungariannotation
    5. DescriptiveCase
    
*/