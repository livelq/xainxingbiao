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

/*β��*/

Lnode *creat2(){
	Lnode *h=(Lnode *)malloc(sizeof(Lnode));
	h->next=NULL; 
	Lnode *t;
	t=h;                //
	int x2;
	scanf("%d",x2);
	while(x2!=0)
	{
		Lnode *p;
		p=(Lnode *)malloc(sizeof(Lnode));
		p->data=x2;
		t->next=p;      //
		t=p;            //
	}
	t->next=NULL;       //�⼸�䶼�Ƚ���Ҫ�����Ǳ�ͷ��� 
	
	return h; 
} 
