#include<stdio.h>
#include<stdlib.h>
define NULL 0
//定义单链表节点结构 
typedef struct ListNode{
	int data;
	struct ListNode *next;
	
}ListNode;
//创建新节点
 ListNode *createnode(int data){
	ListNode *newnode= (ListNode*)malloc(sizeof(ListNote));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
 }
 //插入节点 (尾插法） 
void insertnode(ListNode**head,int data)
 {
 	ListNode *newnode=createnode(data);
 	if(*head==NULL){
 		*head=newnode;
	 }
 	else{
 		ListNode *p=*head;
 		while(p->next!=NULL)
 		{
 			p=p->next;
		 }
 		p->next=newnode;
	 }
 	
 }
 //遍历 单链表
void traverse (ListNode*head)
{
	ListNode *p=head;
	while(p->next!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
	printf("\n");
}
