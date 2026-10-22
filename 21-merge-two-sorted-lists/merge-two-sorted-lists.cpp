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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1==NULL && list2==NULL) return NULL;

        vector<int>arr;

        ListNode* temp=list1;

        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        temp=list2;
        
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }

        sort(arr.begin(),arr.end());

        ListNode* head=new ListNode(arr[0]);
        temp=head;

        int i;
        for(i=1;i<arr.size();i++){
            ListNode* node=new ListNode(arr[i]);
            temp->next=node;
            temp=node;
        }
        return head;
        



        
    }
};