//PPA chi Punyayi(15 wasooool)

#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
private:			//Characterisics
	PNODE Head;
	PNODE Tail;

public: 			//Behaviours
	SinglyCLL();
	void InsertFirst(int no);
	void InsertLast(int no);
	void InsertAtPos(int no, int ipos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int ipos);
	void Display();
	int Count();	
};

SinglyCLL::SinglyCLL()
{
	Head=NULL;
	Tail=NULL;
}

void SinglyCLL::InsertFirst(int no)
{
	PNODE newn = NULL;

	newn = new NODE;
	
	newn->data = no;
	newn->next = NULL;

	if((Head==NULL) && (Tail==NULL))   //LL is empty
	{
		Head = newn;
		Tail = newn;
	}
	else        //LL contains atleast one node
	{
		newn->next= Head;
		Head = newn;
	}
	Tail->next = Head;
}

void SinglyCLL::InsertLast(int no)
{
	PNODE newn = NULL;

	newn = new NODE;
	
	newn->data = no;
	newn->next = NULL;

	if((Head==NULL) && (Tail==NULL))   //LL is empty
	{
		Head = newn;
		Tail = newn;
	}
	else        //LL contains atleast one node
	{
		Tail->next = newn;
		Tail = newn;
	}
	Tail->next = Head;
}

void SinglyCLL::InsertAtPos(int no, int ipos)
{
	int iSize = Count();

	if((ipos<1) || (ipos>iSize+1))
	{
		cout<<"Invalid Position\n";
		return;
	}

	if(ipos == 1)
	{
		InsertFirst(no);	;
	}
	else if(ipos==iSize+1)
	{
		InsertLast(no);
	}
	else
	{
		PNODE newn = NULL;

		newn = new NODE;
	
		newn->data = no;
		newn->next = NULL;
	
		PNODE temp = Head;
		int iCnt=0;

		for(iCnt = 1; iCnt< ipos-1; iCnt++)
		{
			temp = temp->next;
		}

		newn->next = temp->next;
		temp->next = newn;
	}
}

void SinglyCLL::DeleteFirst()
{
	if(Head==NULL && Tail==NULL) //LL is empty
	{
		return;
	}
	else if(Head == Tail)  //LL has one node
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else   // LL has more than one node
	{
		Head = Head->next;  //1
		delete Tail->next;  //2 

		Tail->next = Head;  //3
	}
}

void SinglyCLL::DeleteLast()
{
	if(Head==NULL && Tail==NULL) //LL is empty
	{
		return;
	}
	else if(Head == Tail)  //LL has one node
	{
		delete Tail;
		Head = NULL;
		Tail = NULL;
	}
	else   // LL has more than one node
	{
		PNODE temp = Head;

		while(temp->next != Tail)
		{
			temp = temp->next;
		}	
		delete Tail;
		Tail = temp;

		Tail->next = Head;
	}
}

void SinglyCLL::DeleteAtPos(int ipos)
{
	int iSize = Count();

	if((ipos<1) || (ipos>iSize))
	{
		cout<<"Invalid Position\n";
		return;
	}

	if(ipos == 1)
	{
		DeleteFirst();	
	}
	else if(ipos==iSize)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp1 = Head;
		int iCnt=0;

		for(iCnt = 1; iCnt< ipos-1; iCnt++)
		{
			temp1 = temp1->next;
		}

		PNODE temp2 = temp1->next;

		temp1->next = temp2->next;
		delete temp2;
	}
}

void SinglyCLL::Display()
{
	PNODE temp = Head;
	
	if(Head==NULL && Tail==NULL)
	{
		return;
	}

	do
	{
		cout<<"|"<<temp->data<<"|->";
		temp=temp->next;
	}while(temp != Head);

	cout<<endl;
}

int SinglyCLL::Count()
{
	int iCnt=0;
	PNODE temp = Head;
	
	if(Head==NULL && Tail==NULL)
	{
		return 0;
	}

	do
	{
		iCnt++;
		temp=temp->next;

	}while(temp != Head);

	cout<<endl;
	return iCnt;
}

int main()
{
	int iRet=0;
	SinglyCLL obj;

	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);

	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertLast(121);
	obj.InsertLast(151);
	obj.InsertLast(201);

	obj.Display();

	iRet = obj.Count();
	cout<<"Number of nodes are : "<<iRet;
	cout<<endl;

	obj.InsertAtPos(75,4);

	obj.Display();

	iRet = obj.Count();
	cout<<"Number of nodes are : "<<iRet;

	obj.DeleteAtPos(4);

	obj.Display();

	iRet = obj.Count();
	cout<<"Number of nodes are : "<<iRet;	

	return 0;
}