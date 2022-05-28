//accept no and return the summation of digits
#include<stdio.h>
int Check(int iNo)
{
	int iSum=0,iDigit=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo = iNo/10;
		
	}
	return iSum;
}
int main()
{
	int iValue = 0,iRet=0;
	printf("Enter NO ");
	scanf("%d",&iValue);
	iRet=Check(iValue);
	printf("%d \n",iRet);
	return 0;
}