#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn->data=no;
	newn->next=NULL;

	if(*head==NULL)
	{
		*head = newn;
	}
	else
	{
		newn->next = *head;
		*head = newn;
	}
}

void Display(PNODE head)
{
	printf("Elements from linked list are \n");

	while(head != NULL)
	{
		printf("| %d |->",head->data);
		head = head -> next;
	}
	printf("NULL\n");
}

int Count(PNODE head)
{
	int iCnt = 0;
	while(head != NULL)
	{
		iCnt++;
		head = head->next;
	}
	return iCnt;
}

int SearchLastOcc(PNODE head, int no)
{
	int iCntSL=0, iCnt=0;
	while(head != NULL)
	{
		iCntSL++;
		if(head->data == no)
		{
			iCnt=iCntSL;
		}		
		head = head->next;
	}
	return iCnt;
}

int main()
{
	PNODE first = NULL;
	int iValue1=0,iCnt=0,iValue2=0,iValue3=0,iRet=0;

	printf("enter no of Elements\n");
	scanf("%d",&iValue1);

	printf("enter Element to be searched\n");
	scanf("%d",&iValue3);

	for(iCnt=1; iCnt<=iValue1; iCnt++)
	{
		printf("Enter element\n");
		scanf("%d",&iValue2);
		InsertFirst(&first,iValue2);
	}

	Display(first);
	iRet=SearchLastOcc(first,iValue3);
	if(iRet==0)
	{
		printf("Element not found \n");
	}
	else
	{
		printf("%d\n",iRet);
	}
	return 0;
}