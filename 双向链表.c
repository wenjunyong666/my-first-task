#include<stdio.h>
#include<stdlib.h>
define NULL 0
//����˫������Ľڵ�ṹ 
typedef struct DoubleListNode{
	int data;
	struct DoubleListNode *next;
	struct DoubleListNode *prev;
}DoubleListNode;
//����һ���ڵ� 
DoubleListNode *createdoublelistnode(int data)
{
	DoubleListNode *newnode=(DoubleListNode *)malloc(sizeof(DoubleListNode));
	newnode->data=data;
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}
//����һ���½ڵ㣨β�巨��
void  insertnode(DoubleListNode **head,int data)
{
	DoubleListNode *newnode=createdoublelistnode(data);
	if(*head==NULL){
		*head=newnode;
	}else{
		DoubleListNode *p=*head;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=newnode;
		newnode->prev=p;
	}
}
//����
void traversedouble(DoubleListNode *head)
 {
	DoubleListNode *p=head;
	while(p->next!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
	printf("\n");
 } 
 
 
