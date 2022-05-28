//Accept no from user and check whether its perfect no. or not
//perfect no ie summation of that no's factors = that no
#include<stdio.h>
#include<stdbool.h>
bool Perfect(int iNo)
{
	int iCnt=0,iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=(iNo/2);((iCnt>=iNo/2)&&(iSum <= iNo));iCnt--)
	{
		if((iNo % iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
		

	}
	if(iSum==iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue=0;
	bool bRet=false;
	printf("Enter no\n");
	scanf("%d",&iValue);
	bRet = Perfect(iValue);
	if(bRet==true)
	{
		printf("Perfect no");
	}
	else
	{
		printf("Not Perfect");
	}
	return 0;
} 
