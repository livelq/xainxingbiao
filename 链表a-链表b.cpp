#include<stdio.h>
#include<stdlib.h> 
typedef struct node{
	int data;
	struct node *next;
}Lnode;

/*ͷ��*/

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

/*a-b*/

void different(Lnode *a,Lnode *b)
{
	Lnode *pre,*p,*t,*q;
	pre=a;
	p=a->next; 
	while(p!=NULL)
	{
		q=b->next; 
		while(q!=NULL&&q->data!=p->data)
		{
			q=q->next;
		}
		if(q!=NULL)
		{
			//��Ҫ�Ĵ��� 
			t=p;
			pre->next=t->next;
			p=p->next;
			free(t);
		}
		else
		{
			pre=p;
			p=p->next;
		}
	}
} 
 
