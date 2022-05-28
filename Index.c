#include<stdio.h>
#include<stdlib.h>

int Index(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			
			break;
		}

	}
	if(iCnt==iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}

int main()
{
	int iRet=0, iSize=0, iCnt=0, iValue=0;
	int *p=NULL;

	printf("Enter No of Elements\n");
	scanf("%d",&iSize);

	printf("Enter No\n");
	scanf("%d",&iValue);


	p=(int *)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Memory not allocated\n");
		return -1;
	}

	printf("Enter %d elements\n",iSize);

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element %d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	iRet=Index(p,iSize,iValue);

	if(iRet==-1)
	{
		printf("There is no such element\n");
	}
	else
	{
		printf("%d\n",iRet);
	}

	free(p);
	return 0;


}