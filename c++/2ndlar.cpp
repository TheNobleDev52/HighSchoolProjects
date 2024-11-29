#include <iostream>
using namespace std;

int main() 
{
    int a[500] = {};  // Example array
    int num, i;
    cout<<"Greetings Lifeforms, May I know the number of Elements?\n";
    cin >> num;
    cout<<"Fair enough! Enter the elements then !\n";
    for(i=0; i<num; i++)
    {
    	cin >>a[i];
    }
    // Initializing two variables to track largest and second largest
    int lar1 = INT_MIN;  // Smallest possible integer to start
    int lar2 = INT_MIN;  // Same as above
    lar1=0;
    lar2=0;
    // Edge case: If the array has less than 2 elements
    if (num < 2) {
        cout << "Array must have at least two elements.";
        return 0;
    }
    
    // Loop through the array
    for (int i = 0; i < num ; i++) 
    {
        if (a[i] > lar1) 
        {
            // Update second_largest first, before changing first_largest
            lar2 = lar1;
            lar1 = a[i];  // New largest element found
        }
        // If it's not the largest but bigger than the current second largest
        else if (a[i] > lar2 && a[i] != lar1)
         {
            lar2 = a[i];
        }
    }
    
    if (lar2 == INT_MIN)
     {
        cout << "No valid second largest element exists.";
    } 
    else {
        cout << "The second largest element is: " << lar2 << "\n";
    }
    return 0;
}