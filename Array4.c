#include<stdio.h>

void Display(int Arr[])
{	
	int iCnt=0;
	printf("Elements of Array are : \n");

	for(iCnt=0;iCnt<5;iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
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


//Arr[2]
//*(Arr+2)