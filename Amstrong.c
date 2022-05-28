//Accept no and Check whether amstrong no or not
#include<stdio.h>
#include<stdbool.h>

int Power(int iNo1, int iNo2)
{
	int lMult =1;
	register int iCnt =0;
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		lMult=lMult*iNo1;
	}
	return lMult;

}
bool Amstrong(int iNo)
{
	int temp=0, iDigCnt=0, iSum=0, iDigit=0;
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
		iDigit=iNo%10;
		iSum=iSum+Power(iDigit,iDigCnt);
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