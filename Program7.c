#include<stdio.h>


int Add(int, int);

/////////////////////////////////////////////////
//Write a program to perform addition of 2 numbers
//////////////////////////////////////////////// 

 int main()
 {
	int iNo1=0, iNo2=0, iNo3=0;
	
	printf("Enter First No\n");
	scanf("%d",&iNo1);
	
	printf("Enter Second No\n");
	scanf("%d",&iNo2);
 	
 	iNo3=Add(iNo1,iNo2);
 	
 	printf("Answer is:  %d", iNo3);
 	return 0;

 }

 /////////////////////////////////////////////////
//
//Input:  11	10
//Output: 21
//
/////////////////////////////////////////////////
