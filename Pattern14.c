//input row 4 column 4
/* 

*       *       *       *
*       &       &       *
*       &       &       *
*       *       *       *

*/


#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i=0, j=0;
	for(i=1; i<=iRow; i++)
	{
		for(j=1; j<=iCol; j++)
		{
			if(i==1 || i==iRow || j==1 || j==iCol)
			{
				printf("*\t");
			}
			else
			{
				printf("&\t");
			}
			
		}
		printf("\n");
	}
}

int main()
{
	int iValue1=0, iValue2=0;

	printf("Enter rows and cols\n");
	scanf("%d %d",&iValue1,&iValue2);

	Display(iValue1,iValue2);

	return 0;
}