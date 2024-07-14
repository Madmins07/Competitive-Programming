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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* key = head;
        while (key != NULL) {
            key = key->next;
            count++;
        }
        key = head;
        if (count % 2 == 0) {
            count = (count / 2) + 1;
            while (count != 1) {
                count--;
                key = key->next;
            }
        } else {
            count = count / 2;
            while (count--) {
                key = key->next;
            }
        }
        return key;
    }
};
