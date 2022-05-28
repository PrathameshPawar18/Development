#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iLength)
{
	int iCnt=0, iSum=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=iSum+Arr[iCnt];
	}
	return iSum;
}

int main()
{
	int iRet=0, iSize=0, iCnt=0;
	int *p=NULL;

	printf("Enter No of Elements\n");
	scanf("%d",&iSize);

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

	iRet=Addition(p,iSize);

	printf("%d\n",iRet);

	free(p);
	return 0;


}