#include<stdio.h>
int main()
{
	int i,i,rows;
	printf("enter number of rows which you want:");
	scannf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
	
