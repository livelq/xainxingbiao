#include<stdio.h>
#include<stdlib.h>

typedef struct Polynomial{
	int coef;
	int exp;
	struct Polynomial *next;
}Polynomial;

Polynomial * CreatPoly();
void PrintPoly(Polynomial *p);
Polynomial * add(Polynomial *pa,Polynomial *pb);
Polynomial * reduce(Polynomial *pa,Polynomial *pb);
Polynomial * guidance(Polynomial *pa);

int main(){
	Polynomial *head1=NULL;
	Polynomial *head2=NULL;
	Polynomial *head3=NULL;
	Polynomial *head4=NULL;
	Polynomial *head5=NULL;
	Polynomial *head6=NULL;
	printf("please input polynomial A:\n");
	head1=CreatPoly();
	printf("please input polynomial B:\n");
	head2=CreatPoly();
	printf("please output polynomial A:\n");
	printf("A = ");
	PrintPoly(head1);
	printf("please output polynomial B:\n");
	printf("B = ");
	PrintPoly(head2);
	printf("please output after A add B polynomial C:\n");
	printf("A + B = ");
	head3=add(head1,head2);
	PrintPoly(head3);
	printf("please output after A reduce B polynomial C:\n");
	printf("A - B = ");
	head4=reduce(head1,head2);
	PrintPoly(head4);
//	printf("please output polynomial guidance A:\n");
//	printf("A' = ");
//	head5=guidance(head1);
//	PrintPoly(head5);
//	printf("please output polynomial guidance A:\n");
//	printf("B' = ");
//	head6=guidance(head2);
//	PrintPoly(head6);
} 

/*��������ʽ*/

Polynomial * CreatPoly(){
	Polynomial *head;
	Polynomial *t;
	head=(Polynomial *)malloc(sizeof(Polynomial));
	head->next=NULL;
	t=head;
	int coef,exp;
	scanf("%d%d",&coef,&exp);
	while(coef!=0)
	{
		Polynomial *s=(Polynomial *)malloc(sizeof(Polynomial));
		s->coef=coef;
		s->exp=exp;
		t->next=s;
		t=s;
		scanf("%d",&coef);
		scanf("%d",&exp);
	}
	t->next=NULL;
	
	return head;
}

/*�������ʽ*/

void PrintPoly(Polynomial *p){
	Polynomial *q=p->next;//!!ͷ��㲻������� 
	int flag=1;
//	if(q==NULL)
//	{
//		printf("0\n");
//		return;
//	}
	while(q!=NULL)
	{
		if(q->coef>0&&flag!=1)
		{
			printf("+");
		}
		if(q->coef!=1&&q->coef!=-1)
		{
			printf("%d",q->coef);
			if(q->exp==1)
				printf("X");
			else if(q->exp!=0)
				printf("X^%d",q->exp);
		 } 
		 else
		 {
		 	if(q->coef==1)
		 	{
		 		if(q->exp==0)
		 			printf("1");
		 		else if(q->exp==1)
		 			printf("X");
		 		else
		 			printf("X^%d",q->exp);
			}
			if(q->coef==-1)
			{
			 	if(q->exp==0)
		 			printf("-1");
		 		else if(q->exp==1)
		 			printf("-X");
		 		else
		 			printf("-X^%d",q->exp);
			}
		 }
	q=q->next;
	flag++;
	}
	printf("\n");
} 

/*����ʽ���*/ 

Polynomial * add(Polynomial *pa,Polynomial *pb){
	Polynomial *qa=pa->next;
	Polynomial *qb=pb->next;
	Polynomial *headc,*qc;
	Polynomial *pc=(Polynomial *)malloc(sizeof(Polynomial));
	pc->next=NULL;
	headc=pc;
	while(qa!=NULL&&qb!=NULL)//qb->next��qb������ 
	{
		qc=(Polynomial *)malloc(sizeof(Polynomial));//����ö�ռ� 
		qc->next=NULL;
		if(qa->exp<qb->exp)
		{
			qc->coef=qa->coef;
			qc->exp=qa->exp;
			qa=qa->next;
		}
		else if(qa->exp==qb->exp)
		{
			qc->coef=qa->coef+qb->coef;
			qc->exp=qa->exp;
			qa=qa->next;
			qb=qb->next;
		}
		else
		{
			qc->coef=qb->coef;
			qc->exp=qb->exp;
			qb=qb->next;
		}
		if(qc->coef!=0)
		{
			pc->next=qc;
			pc=qc;
		}
		else
		{
			free(qc);
		}
	}
	while(qa!=NULL)
	{
		qc=(Polynomial *)malloc(sizeof(Polynomial));
		qc->coef=qa->coef;
		qc->exp=qa->exp;
		qa=qa->next;
		pc->next=qc;
		pc=qc;
	}
	
	while(qb!=NULL)
	{
		qc=(Polynomial *)malloc(sizeof(Polynomial));
		qc->coef=qb->coef;
		qc->exp=qb->exp;
		qb=qb->next;
		pc->next=qc;
		pc=qc;
	}
	
	return headc;
}

/*����ʽ���*/ 

Polynomial * reduce(Polynomial *pa,Polynomial *pb){
	Polynomial *hb=pb;//ָ��pb���� 
	Polynomial *pbb;//������������ 
	Polynomial *p=pb->next;//�����ı�pb 
	while(p!=NULL){
		p->coef*=-1;
		p=p->next;
	}
	pbb=add(pa,hb);
//	for(p=hb->next;p;p=p->next)//���滹Ҫ��pa���в�����ԭ����������޹� 
//	{
//		p->coef*=-1;
//	}
	return pbb;
}

/*����ʽ��*/

Polynomial *guidance(Polynomial *pa){
 	Polynomial *p=pa->next;
 	while(p){
 		p->coef=p->coef*p->exp;
	 	p->exp=p->exp-1;
	 	p=p->next;
	 }
 	return pa;
 }
