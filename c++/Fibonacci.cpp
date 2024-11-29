#include <stdio.h>
int fibonacci(int );
int main( )
{
	int i, n;
	printf("enter the num of terms\n");
	scanf("%d",&n);
	printf("Fibonacci series\n" );
	for(i=1;i<=n;i++)
        {
		   printf("%d\t",fibonacci(i));
		}	
	
  return 0;
}
int fibonacci (int i)
{
	if(i==1)
	return 0;
	else if (i==2)
     return 1;
     else 
     return (fibonacci(i-1)+fibonacci (i-2));
}