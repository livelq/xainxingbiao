#include<stdio.h>
#include<stdlib.h> 
typedef struct node{
	int data;
	struct node *next;
}Lnode;

/*ͷ�彨������*/ 
Lnode * create()
{
	Lnode *h = (Lnode *)malloc(sizeof(Lnode)); 
	h->next=NULL;
	int x;
	scanf("%d",&x);
	while(x!=-1)
	{
		Lnode *p=(Lnode *)malloc(sizeof(Lnode));
		p->data=x;
		if(h->next==NULL)
		{
			h->next=p;
			p->next=NULL;
		 } 
		else
		{
			p->next=h->next;
			h->next=p;
		}	 
	} 
	 
	return h;
 } 
 
/*����*/

void reverse(Lnode *h)
{
	Lnode *p=(Lnode *)malloc(sizeof(Lnode));
	Lnode *q;
	p=h->next;
	h->next=NULL;
	while(p!=NULL)
	{
		q=p;
		p=p->next;
		q->next=h->next;//���뵽ͷ������ 
		h->next=q;
	}
} 

