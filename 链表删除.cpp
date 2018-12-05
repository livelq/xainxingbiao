#include<stdio.h>
#include<stdlib.h> 
typedef struct node{
	int data;
	struct node *next;
}Lnode;

/*删除第i个结点*/


//删除第t个结点 
int del(int i){
	Lnode *pre;
	Lnode *t;
	//查找t结点代码 ，调用查找函数
	if(pre==NULL) 
	{
		printf("第i-1个结点不存在\n");
		return 0;
	}
	else
	{
		if(pre->next==NULL)
		{
			printf("第i个结点不存在\n");
			return 0;
		}
		else
		{
			t=pre->next;//！!使得t指向第i个结点 
			pre->next=t->next;
			free(t);
		 } 
	}
		
	
} 
