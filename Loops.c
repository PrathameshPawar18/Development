#include<stdio.h>
Displayf(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d \n",iCnt);
	}

}
Displayb(int iNo)
{
	int iCnt=0;
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("%d \n",iCnt);
	}

}
int main()
{
	int iValue=0;
	printf("Enter no ");
	scanf("%d",&iValue);

	Displayf(iValue);
	printf("R\n");
	Displayb(iValue);
	return 0;
}