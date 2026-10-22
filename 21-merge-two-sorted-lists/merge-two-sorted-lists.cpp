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

        if (list1 == NULL && list2 == NULL)
            return NULL;

        if (list1 == NULL && list2 != NULL) {
            return list2;
        }
        if (list1 != NULL && list2 == NULL) {
            return list1;
        }

        ListNode *head, *temp;

        if (list1 != NULL && list2 != NULL && list1->val <= list2->val) {

            head = new ListNode(list1->val);
            list1 = list1->next;

        } else {

            head = new ListNode(list2->val);
            list2 = list2->next;
        }

        temp = head;

        while (list1 != NULL && list2 != NULL) {

            if (list1->val <= list2->val) {

                ListNode* node = new ListNode(list1->val);
                temp->next = node;
                temp = node;

                list1 = list1->next;

            } else {

                ListNode* node = new ListNode(list2->val);
                temp->next = node;
                temp = node;
                list2 = list2->next;
            }
        }

        if (list1) {

            while (list1 != NULL) {

                ListNode* node = new ListNode(list1->val);
                temp->next = node;
                temp = node;

                list1 = list1->next;
            }
        }

        if (list2) {

            while (list2 != NULL) {

                ListNode* node = new ListNode(list2->val);
                temp->next = node;
                temp = node;
                list2 = list2->next;
            }
        }

        return head;
    }
};