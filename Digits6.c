//Accept no and check palindrome or not
#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
	int iDigit=0,iRev=0;
	int temp =0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	temp=iNo;
	while(iNo>0)
	{
		iDigit = iNo%10;
		iRev = iRev*10+iDigit;
		iNo=iNo/10;

	}
	if(iRev==temp)
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
	int iValue =0; 
	bool bRet;
	printf("Enter No");
	scanf("%d",&iValue);
	bRet=Check(iValue);
	if(bRet==true)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
}