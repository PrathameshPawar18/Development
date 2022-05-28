#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data; 
	struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
	//Allocate memory for node (dynamically)
	//initialise that node
	
	//check whether ll is empty or not
	//if ll is empty then new node is first node so update its address in first pointer through head
	
	//if LL is not empty then store the address of first node in the next pointer of our new node
	//update the first pointer through head
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = no;
	newn->next = NULL;

	if(*head == NULL) //LL is empty
	{
		*head = newn;
	}
	else  //LL contains atleast 1 node
	{
		newn->next = *head;
		*head = newn;
	}
}

void InsertLast(PPNODE head, int no)
{
	//Allocate memory for node (dynamically)
	//initialise that node
	
	//check whether ll is empty or not
	//if ll is empty then new node is first node so update its address in first pointer through head
	
	//if LL is not empty then 
	//travel till last node of LL
	//store address of new node in the next pointer of last node

	PNODE newn = NULL;
	PNODE temp = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = no;
	newn->next = NULL;

	if(*head == NULL) //LL is empty
	{
		*head = newn;
	}
	else  //LL contains atleast 1 node
	{
		//travel till last node
		//store address of new node in the next pointer of last node
		temp = *head;

		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;

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
	printf("Elements from linked list are \n");
	int iCnt = 0;
	while(head != NULL)
	{
		iCnt++;
		head = head->next;
	}
	return iCnt;
}

void DeleteFirst(PPNODE head)
{
	//if LL is empty then return
	//if LL contains atleast 1 node then 
	//store the address of second node int the first pointer through head
	//And delete the first node 
	PNODE temp = NULL;

	if(*head == NULL)
	{
		return;
	}
	else
	{
		temp = *head;
		*head = temp -> next;
		free(temp);
	}
}
void DeleteLast(PPNODE head)
{
	//if LL is empty then return
	//if LL contains 1 node then delete that node and return
	//if LL contains more than one node then travel till second last node and delete last node
	
	PNODE temp = NULL;

	if(*head == NULL)	
	{
		return;
	}
	else if((*head)->next == NULL) //only one node is present
	{
		free(*head);
		*head = NULL;
	}
	else  //if LL contains more than 1 node
	{
		temp = *head;
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}

		free(temp->next);
		temp->next = NULL;
	}
}

void InsertAtPos(PPNODE head, int no, int pos)
{
	//Consider no of nodes are 4
	//if Position is invalid return directly(<1 OR >5)
	//if position is 1 then call InsertFirst
	//if position is N+1 then call InsertLast
	
	int size = 0, iCnt=0;
	size = Count(*head);
	PNODE newn = NULL;
	PNODE temp = NULL;

	if((pos<1)||(pos>(size+1)))
	{
		printf("Position is invalid\n");
		return;
	}

	if(pos == 1)
	{
		InsertFirst(head,no);
	}
	else if(pos == (size+1))
	{
		InsertLast(head,no);
	}
	else   //LOGIC
	{

		newn = (PNODE)malloc(sizeof(NODE));

		newn->data = no;
		newn->next = NULL;

		temp = *head;
		for(iCnt= 1; iCnt<pos-1;iCnt++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;


	}
}

void DeleteAtPos(PPNODE head, int pos)
{
	//Consider no of nodes are 4
	//if Position is invalid return directly(<1 OR >4)
	//if position is 1 then call DeleteFirst
	//if position is N then call DeleteLast
	
	int size = 0, iCnt=0;
	size = Count(*head);
	PNODE temp = NULL;
	PNODE tempdelete = NULL;

	if((pos<1)||(pos>(size)))
	{
		printf("Position is invalid\n");
		return;
	}

	if(pos == 1)
	{
		DeleteFirst(head);
	}
	else if(pos == (size))
	{
		DeleteLast(head);
	}
	else   //LOGIC
	{
		temp = *head;
		for(iCnt= 1; iCnt<pos-1;iCnt++)
		{
			temp= temp->next;
		}
		tempdelete = temp->next;
		temp->next = temp->next->next;
		free(tempdelete);
	}
}	


int main()
{
	PNODE first = NULL;
	int iRet = 0;
 
	InsertFirst(&first,101);  //call by addresss
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);

	InsertAtPos(&first, 75, 3);
	DeleteAtPos(&first,3);

	Display(first); //Call by value

	iRet=Count(first);
	printf("NUmber of elements are : %d\n",iRet);

	InsertFirst(&first,1);
	
	Display(first);

	iRet=Count(first);
	printf("NUmber of elements are : %d\n",iRet);

	InsertLast(&first,111);
	InsertLast(&first,121);

	Display(first);

	iRet=Count(first);
	printf("NUmber of elements are : %d\n",iRet);

	DeleteFirst(&first);
	DeleteFirst(&first);

	Display(first);

	iRet=Count(first);
	printf("NUmber of elements are : %d\n",iRet);	

	DeleteLast(&first);
	DeleteLast(&first);

	Display(first);

	iRet=Count(first);
	printf("NUmber of elements are : %d\n",iRet);

	return 0;
}