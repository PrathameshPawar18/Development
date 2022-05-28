//Accept no from user and return addition of factors 
#include<stdio.h>
int DisplayAdd(int iNo)
{
	int iCnt = 0, iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo % iCnt)==0)
		{
			iSum = iSum+iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue=0, iRet=0;
	printf("enter no\n");
	scanf("%d\n", &iValue);
	iRet = DisplayAdd(iValue);
	printf("%d\n",iRet);
	return 0;
}