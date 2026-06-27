/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        ListNode* temp=head;
      
        int i;
        for(i=0;i<k&&temp!=NULL;i++){
            temp=temp->next;
        }
        if(i<k){
            return head;        }
        ListNode* temp2=head;
       ListNode* curr=head;
      ListNode* prev=NULL;
      ListNode* Next=NULL;
      int c=0;
        while(curr!=NULL&&c<k){
           Next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=Next;
           c++;
        }
        temp2->next=reverseKGroup(curr, k);
        return prev;

    }
};