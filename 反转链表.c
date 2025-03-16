#include<stdio.h>
#include<stdlib.h>
define NULL 0

//反转链表(非递归）
ListNode *fanzhuandigui(ListNode* head){
	ListNode *prev=NULL,*p=head,*nexttemp;//定义三个指针 ,prev指向最后一个节点，nexttemp为转换时暂存 。 
	while(p!=NULL){
		nexttemp=p->next;//用nexttemp暂存p->next 
		p->next=prev;//p指针所在节点指向prev指针所指节点 
		prev=p;//prev指针指向p指针所指地点 
		p=nexttemp;//与第一步结合，使p指向下一个节点 ，重复以上操作便可使链表翻转。 
		
	}
	return prev;//翻转后最后一个节点变为了链表的头节点。 
}
 //反转链表（递归） 
 ListNode *fanzhuandigui(ListNode* head){
 	if(head==NULL||head->data==NULL) return head;//当链表为空链表，或只有一个节点时，不对链表进行操作。 
 	ListNode *newhead=fanzhuandigui(head->next);//递归调用，不断深入到下一个节点，直到到达末尾，然后从末尾开始操作下面代码，返回已经反转好的节点，递归返回时，head指向要处理的节点，head->next指向已经反转好的子链的头节点。 
 	head->next->next=head;
 	head->next=NULL;
 	return  newhead;
 }
