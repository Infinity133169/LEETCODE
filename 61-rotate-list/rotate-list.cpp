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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head==NULL || head->next==NULL || k==0) return head;

        vector<int>arr;
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        k=k%size;


        if(k==0) return head;



       
        int cnt=0;
        temp=head;
        while(temp!=NULL && cnt<(size-k)){
            cnt++;
            temp=temp->next;
        }
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        cnt=1;
        while(cnt<=(size-k) && temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
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