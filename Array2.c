#include<stdio.h>

void Display(int *ptr)
{	
	int iCnt=0;
	printf("Elements of Array are : \n");

	for(iCnt=0;iCnt<5;iCnt++)
	{
		printf("%d\n",*ptr);
		ptr++;
	}	
}

int main()
{
	int iCnt=0;
	int Arr[5];

	printf("Enter Elements\n");

	for(iCnt=0;iCnt<5;iCnt++)
	{
	scanf("%d",&Arr[iCnt]);
	}

	Display(Arr);  //Display(100);

	return 0;
}