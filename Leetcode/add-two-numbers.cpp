class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p = new ListNode(0); // dummy node
        ListNode* r = p;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = (l1 != nullptr ? l1->val : 0) + (l2 != nullptr ? l2->val : 0) + carry;
            ListNode* x = new ListNode(sum % 10);
            carry = sum / 10;
            r->next = x;
            r = r->next;
            l1 = l1 != nullptr ? l1->next : nullptr;
            l2 = l2 != nullptr ? l2->next : nullptr;
        }
        return p->next; // return the next node of the dummy node
    }
};
