#include<stdio.h>
#include<stdlib.h>
define NULL 0
//���嵥����ڵ�ṹ 
typedef struct ListNode{
	int data;
	struct ListNode *next;
	
}ListNode;
//�����½ڵ�
 ListNode *createnode(int data){
	ListNode *newnode= (ListNode*)malloc(sizeof(ListNote));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
 }
 //����ڵ� (β�巨�� 
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
 //���� ������
void traverse (ListNode*head)
{
	ListNode *p=head;
	while(p->next!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
	printf("\n");
}
