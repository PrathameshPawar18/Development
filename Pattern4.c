//input: 5
//output: 5 * 4 * 3 * 2 * 1 *
//complexity O(N)

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=iNo; iCnt>=1; iCnt--)
	{
		printf("%d\t*\t",iCnt);
	}
}
int main()
{
	int iValue=0;

	printf("Please enter value\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}