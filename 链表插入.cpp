#include<stdio.h>
#include<stdlib.h> 
typedef struct node{
	int data;
	struct node *next;
}Lnode;

/*�����i����㣨�����Ϊ���뵽�ڵ����ͽڵ�ǰ�棩*/

int insert(int i,int x){
	Lnode *p;
	//���ò��ҵĺ�������
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

/*���뵽����p�ڵ�֮��*/

int insert1(){
	Lnode *p;
	Lnode *s;
	s->next=p->next;
	p->next=s;
} 

/*���뵽����p�ڵ�֮��*/

int insert2() {
	Lnode *p;//������� 
	Lnode *t;//��ʱ��㣬Ϊ����p��ǰ��� 
	Lnode *h;//ͷ��� 
	Lnode *s;//Ҫ����Ľڵ� 
	t=h;
	while(t->next!=p)
	{
		t=t->next; 
	}
	//�����뵽t�ڵ�֮�󣬺�����һ��
	s->next=t->next;
	t->next=s; 
}
