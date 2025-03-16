#include<stdio.h>
#include<stdlib.h>
define NULL 0
ListNode *oddEvenList(ListNode* head)
{
	if(head==NULL) return head;
	ListNode* odd=head,*even=head->next,*evenhead=even;
	while(even!=NULL&&even->next!=NULL){
		odd->next=even->next;
		odd=odd->next;
		even->next=odd->next;
		even=even->next;
	}
	odd->next=evenhead;
	return head;
}
