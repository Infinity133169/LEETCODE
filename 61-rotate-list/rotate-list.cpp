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
        ListNode* nextNode;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        k=k%size;


        if(k==0) return head;

        int cnt=0;
        temp=head;
        while(temp!=NULL && cnt<(size-k-1)){
            cnt++;
            temp=temp->next;
        }
        nextNode=temp->next;
        temp->next=NULL;
        temp=nextNode;
        while(nextNode->next!=NULL){
            nextNode=nextNode->next;
        }
        nextNode->next=head;
    



       
        
        return temp;
        
    }
};