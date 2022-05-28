//input: 5
//output: * * * * *

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		printf("*\t");
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