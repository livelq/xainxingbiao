#include<stdio.h>
#include<stdlib.h> 
typedef struct node{
	int data;
	struct node *next;
}Lnode;

/*±í³¤*/

int length(){
	Lnode *h=(Lnode *)malloc(sizeof(Lnode));
	Lnode *p;
	p=h;
	int i=0;
	while(p->next!=NULL)
	{
		i++;
		p=p->next;
	}
	
	return i;
} 
