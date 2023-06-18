#include "struct/singly-linked-list.h"

class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        ListNode *dummyHead = new ListNode(0, head);
        ListNode *cur = dummyHead;
        while (cur->next != nullptr && cur->next->next != nullptr) {
            ListNode *tmp = cur->next;
            ListNode *tmp1 = cur->next->next->next;

            cur->next = cur->next->next;
            cur->next->next = tmp;
            cur->next->next->next = tmp1;

            cur = cur->next->next;
        }

        return dummyHead->next;
    }
};