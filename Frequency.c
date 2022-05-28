#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
	int iCnt=0, iFreq=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			iFreq++;
		}
	}
	return iFreq;
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

	iRet=Frequency(p,iSize,iValue);

	printf("%d\n",iRet);

	free(p);
	return 0;


}