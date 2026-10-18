/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* temp=head;
        // int pos=0;
        map<ListNode*,int>mpp;
        while(temp!=NULL){
            mpp[temp]=1;
            temp=temp->next;

            if(mpp.find(temp)!=mpp.end()){
                return temp;
            }


           
            // pos++;
        }
        return NULL;
    }
};