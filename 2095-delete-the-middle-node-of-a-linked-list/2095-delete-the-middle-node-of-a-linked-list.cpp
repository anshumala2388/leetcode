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
    ListNode* deleteMiddle(ListNode* head) {
        if(head ==NULL||head->next==NULL) return NULL;
        ListNode* temp=head;
        ListNode* temp2=head;
        int c=0;
        while(temp2!=NULL){
              c++;
              temp2=temp2->next;
        }
        
        int i, n=c/2;
        for(i=0;i<n-1;i++){
            temp=temp->next;
        }
        ListNode*temp3=temp->next;
        temp->next=temp->next->next;
        delete temp3;
        
        return head; 
    }
};