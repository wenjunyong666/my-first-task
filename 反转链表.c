#include<stdio.h>
#include<stdlib.h>
define NULL 0

//��ת����(�ǵݹ飩
ListNode *fanzhuandigui(ListNode* head){
	ListNode *prev=NULL,*p=head,*nexttemp;//��������ָ�� ,prevָ�����һ���ڵ㣬nexttempΪת��ʱ�ݴ� �� 
	while(p!=NULL){
		nexttemp=p->next;//��nexttemp�ݴ�p->next 
		p->next=prev;//pָ�����ڽڵ�ָ��prevָ����ָ�ڵ� 
		prev=p;//prevָ��ָ��pָ����ָ�ص� 
		p=nexttemp;//���һ����ϣ�ʹpָ����һ���ڵ� ���ظ����ϲ������ʹ����ת�� 
		
	}
	return prev;//��ת�����һ���ڵ��Ϊ�������ͷ�ڵ㡣 
}
 //��ת�����ݹ飩 
 ListNode *fanzhuandigui(ListNode* head){
 	if(head==NULL||head->data==NULL) return head;//������Ϊ��������ֻ��һ���ڵ�ʱ������������в����� 
 	ListNode *newhead=fanzhuandigui(head->next);//�ݹ���ã��������뵽��һ���ڵ㣬ֱ������ĩβ��Ȼ���ĩβ��ʼ����������룬�����Ѿ���ת�õĽڵ㣬�ݹ鷵��ʱ��headָ��Ҫ����Ľڵ㣬head->nextָ���Ѿ���ת�õ�������ͷ�ڵ㡣 
 	head->next->next=head;
 	head->next=NULL;
 	return  newhead;
 }
