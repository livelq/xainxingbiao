//β�� 
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
	film * head=NULL;//����ͷ��㲢����Ϊ�� 
	film *pre,*current;
	char input[MAX];
	while(gets(input)!=NULL && input[0]!='\0') 
	{
		current=(film *)malloc(sizeof(film));//malloc����һ���ռ䣬�������ַ����ָ�� 
		if(head==NULL)
			current=head;
		else
			pre->next=current;//��ǰ�ĵ�ַ����ǰ��ڵ��next�� 
		current->next=NULL;//��ǰ��next����Ϊnull��Ϊ���һ�� 
		
		
		pre=current;//preָ��current 
		           //ǰһ������ָ�������һλ 
	}

 }
  
