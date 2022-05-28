//Accept no and Check whether amstrong no or not
#include<stdio.h>
#include<stdbool.h>

bool Amstrong(int iNo)
{
	int temp=0, iDigCnt=0, iSum=0,iCnt=0,iMult=0, iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	temp=iNo;
	while(iNo>0)
	{
		iNo=iNo/10;
		iDigCnt++;

	}
	iNo=temp;
	while(iNo != 0)
	{
		iMult=1;
		iDigit=iNo%10;
		for(iCnt=1;iCnt<=iDigCnt;iCnt++)
		{
			iMult=iMult*iDigit;
			
		}
		
		iSum=iSum+iMult;
		iNo = iNo/10;
	}
	if(iSum==temp)
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
	bool bRet;

	printf("Enter No\n");
	scanf("%d",&iValue);

	bRet=Amstrong(iValue);

	if(bRet==true)
	{
		printf("Amstrong no\n");
	}
	else
	{
		printf("Not Amstrong\n");
	}
	return 0;
}