#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int num,facto,temp;
	cout<<"Enter a number to find factorial of:\n";
	cin>>num;
	temp = num;
	facto=fact(num);
	cout<<"The factorial of %d is %d",temp,facto;
	return 0;
}
int fact(int num,int facto)
{
	if(num==0)
	return 1;
	else
	return facto*fact(num-1);
}
