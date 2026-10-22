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
            return NULL;
        if (lists.size() == 1)
            return lists[0];

        int i;
        vector<int> arr;
        ListNode *head, *temp;

        for (i = 0; i < lists.size(); i++) {
            temp = lists[i];

            while (temp != NULL) {
                arr.push_back(temp->val);
                temp = temp->next;
            }
        }

        sort(arr.begin(), arr.end());

        if (arr.empty()) return nullptr;

        head = new ListNode(arr[0]);
        temp = head;

        for (i = 1; i < arr.size(); i++) {
            ListNode* node = new ListNode(arr[i]);
            temp->next = node;
            temp = node;
        }
        return head;
    }
};