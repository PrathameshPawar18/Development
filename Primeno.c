//Check Whether Prime or Not
#include<stdio.h>
#include<stdbool.h>


bool CheckPrime(int iNo)
{

	int iCnt=0, iFact=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo%2==0 && iNo != 2)
	{
		return false;
	}
	else
	{
		for(iCnt=2;iCnt<=iNo/2;iCnt++)
		{
			if(((iNo%iCnt)==0))
			{
				iFact++;
			}
		}
		if(iFact==0)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}

}

int main()
{

	int iValue=0;
	bool bRet;
	printf("Enter NO.: \n");
	scanf("%d",&iValue);

	bRet=CheckPrime(iValue);
	if(bRet==true)
	{
		printf("Prime no: %d",iValue);
	}
	else
	{
		printf("Not Prime no:  %d",iValue);		
	}

	return 0;

}