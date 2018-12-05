#include<stdio.h>
#include<stdlib.h> 
typedef struct node{
	int data;
	struct node *next;
}Lnode;

/*按序号查找(找第k个元素)*/  

Lnode * find(int k){
	Lnode *h=(Lnode *)malloc(sizeof(Lnode));
	Lnode *p=h;
	int i=0;
	while(p->next!=NULL && i<k)   //判断p不是最后一个且i!=k 
	{
		p=p->next;
		i++;
	}
	if(i==k)
		return p;
	else
		return NULL; 
}

/*按值查找（查找x所在位置）*/ 

Lnode *find2(int x){
	Lnode *h=(Lnode *)malloc(sizeof(Lnode));
	Lnode *p=h->next;
	while(p!=NULL && p->data!=x)
	{
		p=p->next;
	} 
	 
	return p;
}
