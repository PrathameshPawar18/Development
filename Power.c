#include"HeaderP.h"

int main()
{
	int iValue1=0,iValue2=0;
	ULONG lRet=0;

	printf("Enter Base\n");
	scanf("%d",&iValue1);

	printf("Enter Power\n");
	scanf("%d",&iValue2);

	lRet=Power(iValue1,iValue2);
	printf("Result is: %ld\n",lRet);
	
	return 0;
}