//Accept no and return addition of even digits

#include<stdio.h>
int DisplayEven(int iNo)
{
	int iSum=0,iDigit=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
		iSum=iSum+iDigit;
		}
		iNo = iNo/10;
		
	}
	return iSum;
}
int main()
{
	int iValue = 0,iRet=0;
	printf("Enter NO ");
	scanf("%d",&iValue);
	iRet=DisplayEven(iValue);
	printf("%d \n",iRet);
	return 0;
}