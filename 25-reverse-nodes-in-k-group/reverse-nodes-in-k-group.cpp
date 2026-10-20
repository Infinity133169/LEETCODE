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

        if(head==NULL || head->next==NULL || k==1) return head;

        ListNode* temp=head;
        int size=0;
        

        while(temp!=NULL){
            size++;
            temp=temp->next;

        }
        vector<int>arr(size);
        int totalgrp=(size)/k;
        int groupNO=1;
        temp=head;
        while(groupNO<=totalgrp){
            for(int m=1;m<=k;m++){
                int i=k*groupNO-m;

                arr[i]=temp->val;
                temp=temp->next;

            }
            groupNO++;
        }
        int ind=totalgrp*k;
        while(temp!=NULL){
            arr[ind]=temp->val;
            temp=temp->next;
            ind++;
        }

        temp=head;
        int i=0;
        while(temp!=NULL){
            temp->val=arr[i];
            i++;
            temp=temp->next;
            
        }
        return head;

        

        
    }
};