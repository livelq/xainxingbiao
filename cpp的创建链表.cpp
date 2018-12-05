//尾插 
#include<stdio.h>
#include<stdlib.h>
#define MAX 45
typedef struct a{
	char movie[MAX];
	int level;
	struct a * next;
}film;
int main()
{
	film * head=NULL;//创建头结点并设置为空 
	film *pre,*current;
	char input[MAX];
	while(gets(input)!=NULL && input[0]!='\0') 
	{
		current=(film *)malloc(sizeof(film));//malloc申请一个空间，并将其地址赋给指针 
		if(head==NULL)
			current=head;
		else
			pre->next=current;//当前的地址赋给前面节点的next域 
		current->next=NULL;//当前的next域设为null，为最后一个 
		
		
		pre=current;//pre指向current 
		           //前一个结点的指针向后移一位 
	}

 }
  
