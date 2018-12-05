#include<stdio.h>
#include<stdlib.h> 
typedef struct node{
	int data;
	struct node *next;
}Lnode;

/*头插*/

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

/*尾插*/

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
	t->next=NULL;       //这几句都比较重要，但是比头插简单 
	
	return h; 
} 
