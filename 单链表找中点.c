#include<stdio.h>
#include<stdlib.h>
define NULL 0
ListNode *Finemiddlenode(ListNode *head)
{
	ListNode* slow=head;
	ListNode* fast=head;
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;//慢指针走一格 
		fast=fast->next->next;//快指针走两格 
	}
	return slow;//快指针走的路程是两倍慢指针的路程，快指针的路程是链表的长度，所以慢指针所指即为中点 
}
