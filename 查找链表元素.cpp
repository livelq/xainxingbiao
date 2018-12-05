#include<stdio.h>
#include<stdlib.h> 
typedef struct node{
	int data;
	struct node *next;
}Lnode;

/*����Ų���(�ҵ�k��Ԫ��)*/  

Lnode * find(int k){
	Lnode *h=(Lnode *)malloc(sizeof(Lnode));
	Lnode *p=h;
	int i=0;
	while(p->next!=NULL && i<k)   //�ж�p�������һ����i!=k 
	{
		p=p->next;
		i++;
	}
	if(i==k)
		return p;
	else
		return NULL; 
}

/*��ֵ���ң�����x����λ�ã�*/ 

Lnode *find2(int x){
	Lnode *h=(Lnode *)malloc(sizeof(Lnode));
	Lnode *p=h->next;
	while(p!=NULL && p->data!=x)
	{
		p=p->next;
	} 
	 
	return p;
}
