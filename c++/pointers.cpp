//OBJ: pointers
#include <iostream>
using namespace std;
int main( )
{
	int a=52;
	int *ptr =&a; 
	cout<< *ptr <<endl ;
	// ptr gives the memory address of a 
	// *ptr gives the address value of a
	int arr[]={ 1,2,3,4,5,6,7,8,9};
	int *ptr2 =&arr[0];
	//array is already a pointer pointing to its first elements memory address
	int n= sizeof(arr)/sizeof(arr[0]);
	//calculating the length of the array
	for(int i=0; i<n ;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<ptr2<<endl;
  return 0;
}