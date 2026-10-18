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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB;
        int a,b,d;
        a=b=d=0;

        while(tempA!=NULL){
            a++;
            tempA=tempA->next;
        }
        tempB=headB;
        while(tempB!=NULL){
            b++;
            tempB=tempB->next;
        }
        tempA=headA;
        tempB=headB;
        if(a>=b){
        
            d=a-b;
            while(d){
                tempA=tempA->next;
                d--;

            }

        }
        else{
            
            d=b-a;
            while(d--){
                tempB=tempB->next;

            }

        }

        while(tempA!=NULL && tempB!=NULL){
            if(tempA==tempB) return tempA;
            tempA=tempA->next;
            tempB=tempB->next;
        }

        return NULL;

    }
};