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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if (lists.empty())
            return nullptr;

        if(lists.size()==1) return lists[0];

    


        int i;
        ListNode *head, *temp1, *temp2,*temp,*node;

        temp1 = lists[0];

        for (i = 1; i < lists.size(); i++) {
            temp2 = lists[i];

            // Handle empty lists
            if (temp1 == nullptr) {
                temp1 = temp2;
                continue;
            }

            if (temp2 == nullptr) {
                continue;
            }


            if (temp1->val <= temp2->val) {
                head = new ListNode(temp1->val);
                temp1 = temp1->next;
            } else {

                head = new ListNode(temp2->val);
                temp2 = temp2->next;
            }
            temp = head;
            while (temp1 != NULL && temp2 != NULL) {
                if (temp1->val <= temp2->val) {

                    // node = new ListNode(temp1->val);
                    temp->next = temp1;
                    temp = temp1;
                    temp1 = temp1->next;
                } else {

                    // node = new ListNode(temp2->val);
                    temp->next = temp2;
                    temp = temp2;
                    temp2 = temp2->next;
                }
            }

            if (temp1 != NULL) {
                while (temp1 != NULL) {

                    // node = new ListNode(temp1->val);
                    temp->next = temp1;
                    temp = temp1;
                    temp1=temp1->next;
                }
            }
            if (temp2 != NULL) {

                while (temp2 != NULL) {

                    // ListNode* node = new ListNode(temp2->val);
                    temp->next = temp2;
                    temp = temp2;
                    temp2=temp2->next;
                }
            }

            temp1 = head;
        }

        return temp1;
    }
};