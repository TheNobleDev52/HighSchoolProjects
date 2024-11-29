#include <iostream>
using namespace std;
int main()
{
	int x,rem=0,sum=0,i=1;
	cout<<"Enter a number to check\n" ;
	cin>>x;
	i=x;
	while(x>0)
	{
	   rem=x%10;
	   sum= sum+rem*rem*rem;
	   x=x/10;
	}
	
	if(i==sum)
	{
	    cout<<"Armstrong number "<<i<<"\tdoes this work";
	}
	i=1;
	if(i==printf(" "))
  return 0;
}

time is 