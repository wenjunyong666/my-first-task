#include<stdio.h>
#include<stdlib.h>
define NULL 0
int isitCycle(ListNode *head)
{
	if(head==NULL||head->next==NULL) return 0;
	ListNode *slow=head;
	ListNode *fast=head->next;
	while(slow!=fast){
		if(fast==NULL||fast->next==NULL) return 0;
		slow=slow->next;
		fast=fast->next->next;
	}
	return 1;
	
}
