#include<stdio.h>
#include<stdlib.h> 
typedef struct node{
	int data;
	struct node *next;
}Lnode;

/*ɾ����i�����*/


//ɾ����t����� 
int del(int i){
	Lnode *pre;
	Lnode *t;
	//����t������ �����ò��Һ���
	if(pre==NULL) 
	{
		printf("��i-1����㲻����\n");
		return 0;
	}
	else
	{
		if(pre->next==NULL)
		{
			printf("��i����㲻����\n");
			return 0;
		}
		else
		{
			t=pre->next;//��!ʹ��tָ���i����� 
			pre->next=t->next;
			free(t);
		 } 
	}
		
	
} 
