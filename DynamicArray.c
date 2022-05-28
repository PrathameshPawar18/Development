#include<stdio.h>
#include<stdlib.h>  //For malloc and free

void Display(int Arr[],int iLength)
{	
	int iCnt=0;
	printf("Elements of Array are : \n");

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
	}	
}

int main()
{	
	//int Arr[5];
	int *ptr=NULL;
	int iCnt=0;
	int iSize=0;

	printf("Enter Number of Elements\n");
	scanf("%d",&iSize);

	ptr = (int *)malloc(iSize * sizeof(int));

	printf("Enter Elements\n");

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
	scanf("%d",&ptr[iCnt]);
	}

	Display(ptr,iSize);  //Display(100);
	free(ptr);

	return 0;

}

