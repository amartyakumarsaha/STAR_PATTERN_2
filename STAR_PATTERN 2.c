#include<stdio.h>
#define row 4
#define col 4
int main(void)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(j=0;j<col;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
