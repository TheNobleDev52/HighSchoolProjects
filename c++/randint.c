#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main( )
{
	int rint,iint;
//	srand(time(0));
	rint=rand()%6;
//	for(int i=0;i<20;i++)
//	{
		
			srand(time(NULL));
        	rint=rand();
	    //    rint = rint*rint;
	        rint=rint%10;
		printf("%d\n",rint);
//	}
	
	
  return 0;
}