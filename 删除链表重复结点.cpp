#include<stdio.h>
#include<stdlib.h> 
typedef struct node{
	int data;
	struct node *next;
}Lnode;

/*ͷ�彨������*/ 

Lnode * creat(){
	Lnode *h;
	h=(Lnode *)malloc(sizeof(Lnode));
	h->next=NULL;
	int x;
	scanf("%d",x);
	while(x!=0)
	{
		Lnode *p;
		p=(Lnode *)malloc(sizeof(Lnode));
		p->data=x;
		p->next=h->next;  //!������Ҫ��������� 
		h->next=p;        //!��!��Ҫ��������� 
	}
	
	return h;
} 

/*ɾ���ظ����*/ 

void delrepeat(Lnode *h)
{	
	Lnode *p,*q,*t;
	h->next=p;
	if(p!=NULL)
	{
		while(p->next!=NULL)
		{
			q=p;
			while(q->next!=NULL)
			{
				if(q->next->data==p->data)
				{
					t=q->next;
					q->next=t->next;
					free(t);
				}
				else
					q=q->next;
			}
			p=p->next;
		}
	 } 
	
 } 
