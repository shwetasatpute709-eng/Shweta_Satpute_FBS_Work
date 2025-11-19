#include<stdio.h>
int main()
{
	int i,j,n,k;
	n=4;
	for(i=5;i>=1;i--)
	{
		for(k=1;k<=n;k++)
		printf(" ");
		for(j=1;j<=i;j++)
			printf("* ");
		printf("\n");
		n++;
	}
}