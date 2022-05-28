//Accept no and return no of digits from that user

#include<stdio.h>
int Check(int iNo)
{
	int iCnt=0;
	while(iNo>0)
	{
		// iDigit=iNo%10;
		iCnt++;
		iNo = iNo/10;
		
	}
	return iCnt;
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