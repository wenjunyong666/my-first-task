#include<stdio.h>
#include<stdlib.h>
define NULL 0
ListNode *Finemiddlenode(ListNode *head)
{
	ListNode* slow=head;
	ListNode* fast=head;
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;//��ָ����һ�� 
		fast=fast->next->next;//��ָ�������� 
	}
	return slow;//��ָ���ߵ�·����������ָ���·�̣���ָ���·��������ĳ��ȣ�������ָ����ָ��Ϊ�е� 
}
