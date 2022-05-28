//input row= 4 col=4
/*

$       *       *       *
#       $       *       *
#       #       $       *
#       #       #       $

*/

//complexity O(N^2)

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i=0, j=0;
	if(iRow != iCol)
	{
		return;
	}
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			
			if(i<j)
			{
				printf("*\t");
			}
			else if(i>j)
			{
				printf("#\t");
			}
			else if(i==j)
			{
				printf("$\t");
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1=0, iValue2=0;

	printf("Please enter rows\n");
	scanf("%d",&iValue1);

	printf("Please enter columns\n");
	scanf("%d",&iValue2);

	Display(iValue1,iValue2);

	return 0;
}