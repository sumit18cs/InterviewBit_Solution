/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */

listnode* partition(listnode* head, int x) {
    listnode *temp1=listnode_new(0);
    listnode *temp2=listnode_new(0);
    listnode *head1=temp1,*head2=temp2;
    while(head!=NULL){
        if(head->val<x){
            temp1->next=head;
            head=head->next;
            temp1=temp1->next;
        }
        else{
            temp2->next=head;
            head=head->next;
            temp2=temp2->next;
        }
    }
    temp2->next=NULL;
    temp1->next=head2->next;
    return head1->next;
}
