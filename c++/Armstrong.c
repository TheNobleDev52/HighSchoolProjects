#include<stdio.h>
int main( )
{
	int num,sum = 0,rem,temp;
	printf("Enter your number to check!\n");
	scanf("%d",&num);
	temp = num ;
	while(num>0)
	{
		//remainder contains the last digit.
		rem = num%10;
		sum = sum + rem*rem*rem;
		num /= 10;
	}
	//logic is just sum the cube of remainders 
	if(sum==temp)
     	printf("%d is an Armstrong Number ! ",temp);
     else
         printf("%d is not an Armstrong Number :( ",                  temp);
     return 0;
}
        
