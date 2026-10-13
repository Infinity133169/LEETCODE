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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* temp;
    
        while(n){
            fast=fast->next;
            n--;

        }

        if(fast==NULL){

            temp=head->next;
            delete(head);
            return temp;

        
        }

        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        temp=slow->next;
        slow->next=slow->next->next;
        delete(temp);
        return head;



    }
};