#include<stdio.h>
#include<stdlib.h> 
typedef struct node{
	int data;
	struct node *next;
}Lnode;

/*插入第i个结点（插入分为插入到节点后面和节点前面）*/

int insert(int i,int x){
	Lnode *p;
	//调用查找的函数代码
	if(p==NULL)
		return 0;
	else
	{
		Lnode *s=(Lnode *)malloc(sizeof(Lnode));
		s->data=x;
		s->next=p->next;
		p->next=s;
		return 1;
	 } 
} 

/*插入到给定p节点之后*/

int insert1(){
	Lnode *p;
	Lnode *s;
	s->next=p->next;
	p->next=s;
} 

/*插入到给定p节点之后*/

int insert2() {
	Lnode *p;//给定结点 
	Lnode *t;//临时结点，为了找p的前结点 
	Lnode *h;//头结点 
	Lnode *s;//要插入的节点 
	t=h;
	while(t->next!=p)
	{
		t=t->next; 
	}
	//即插入到t节点之后，和上面一样
	s->next=t->next;
	t->next=s; 
}
