#include<stdio.h>

int Add(int a,int b)
{
	int ans=0;
	ans=a+b;

	return ans;

}

int main()
{
	int i=0,j=0,ret=0;
	printf("First no\n" );
	scanf("%d",&i);
	printf("Second no\n" );
	scanf("%d",&j);

	ret=Add(i,j);
	printf("Answer is %d\n",ret);


	return 0;
}