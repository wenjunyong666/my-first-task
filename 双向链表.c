#include<stdio.h>
#include<stdlib.h>
define NULL 0
//定义双向链表的节点结构 
typedef struct DoubleListNode{
	int data;
	struct DoubleListNode *next;
	struct DoubleListNode *prev;
}DoubleListNode;
//创建一个节点 
DoubleListNode *createdoublelistnode(int data)
{
	DoubleListNode *newnode=(DoubleListNode *)malloc(sizeof(DoubleListNode));
	newnode->data=data;
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}
//插入一个新节点（尾插法）
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
//遍历
void traversedouble(DoubleListNode *head)
 {
	DoubleListNode *p=head;
	while(p->next!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
	printf("\n");
 } 
 
 
