/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* a, ListNode* b) {
    ListNode* head=new ListNode(0);
    ListNode* temp=head,*n;
    while(1){
        if(a==NULL && b==NULL){break;}
        if(a==NULL){temp->next=b;break;}
        if(b==NULL){temp->next=a;break;}
        if(a->val<b->val){
            n=new ListNode(a->val);
            temp->next=n;
            temp=temp->next;
            a=a->next;
        }
        else{
            n=new ListNode(b->val);
            temp->next=n;
            temp=temp->next;
            b=b->next;
        }
    }
    return head->next;
}
