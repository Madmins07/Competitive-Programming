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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int count = 0, mid;
        while (temp) {
            count++;
            temp = temp->next;
        }
        mid = count / 2;
        if (mid == 0)
            return nullptr;
        temp = head;
        mid--;
        while (mid--) {
            temp = temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};
