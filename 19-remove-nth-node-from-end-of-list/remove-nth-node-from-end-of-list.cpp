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





        int cnt = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }

        int k = cnt - n + 1;

        if (k == 1) {
            temp = head->next;

            head->next = NULL;
            delete(head);
            return temp;
        }

        temp = head;
        ListNode* prev = new ListNode(0, head);
        cnt = 0;
        while (temp != NULL) {
            cnt++;
            if (cnt == k)
                break;
            temp = temp->next;
            prev = prev->next;
        }

        prev->next = temp->next;
        temp->next = NULL;
        delete(temp);
        return head;
    }
};