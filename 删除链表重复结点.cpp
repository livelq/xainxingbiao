#include<stdio.h>
#include<stdlib.h> 
typedef struct node{
	int data;
	struct node *next;
}Lnode;

/*头插建立链表*/ 

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
		p->next=h->next;  //!！！重要的两句代码 
		h->next=p;        //!！!重要的两句代码 
	}
	
	return h;
} 

/*删除重复结点*/ 

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
