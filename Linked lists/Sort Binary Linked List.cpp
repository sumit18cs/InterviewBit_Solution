/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* head) {
    ListNode* temp=head;
    int a=0;
    while(temp!=NULL){
        if(temp->val==0){a++;}
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(a>0){
            temp->val=0;
            a--;
        }
        else{temp->val=1;}
        temp=temp->next;
    }
    return head;
}
