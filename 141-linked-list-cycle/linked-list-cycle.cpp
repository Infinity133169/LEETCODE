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
    bool hasCycle(ListNode *head) {
        if(head==NULL|| head->next==NULL) return false;
        ListNode* temp=head;
        map<ListNode*,int>mpp;
        while(temp!=NULL){
            ///checking
            if(mpp.find(temp)!=mpp.end()){
                return true;
                break;
            }
            mpp[temp]=1;
            temp=temp->next;

        }
        return false;
        

    }
};