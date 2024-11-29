#include <stdio.h>
int main( )
{
	int i,j,a[2][2];
	printf("Enter the elements\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//output
	printf(" The transpose matrix is : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}	
  return 0;
}