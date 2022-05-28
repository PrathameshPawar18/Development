#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
	register int iCnt=0;
	int iMax=Arr[0];

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iMax)
		{
			iMax=Arr[iCnt];
		}
	}
	return iMax;
}

int main()
{
	int iRet=0, iSize=0;
	register int iCnt=0;
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

	iRet=Maximum(p,iSize);

	printf("%d\n",iRet);

	free(p);
	return 0;


}

// minimum sathi imin = arr[0] la set karyla lagel ka