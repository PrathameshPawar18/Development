#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iLength)
{
	int iCnt=0;
	printf("Even Numbers Are: \n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			printf("%d\n",Arr[iCnt]);
		}	
	}

}
int main()
{
	int iCnt=0, iSize=0;
	int *ptr=NULL;

	printf("Enter Size of Array\n");
	scanf("%d",&iSize);

	ptr=(int *)malloc(iSize * sizeof(int));

	printf("Enter elements\n");

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	DisplayEven(ptr,iSize);
	free(ptr);

	return 0;
}