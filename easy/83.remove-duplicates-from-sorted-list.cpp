#include "struct/singly-linked-list.h"

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == nullptr) {
            return head;
        }

        ListNode *tmp = head;
        ListNode *out = tmp;
        ListNode *outHead = tmp;

        tmp = tmp->next;

        while (tmp != nullptr) {
            if (tmp->val != out->val) {
                out->next = tmp;
                out = out->next;
            }
            tmp = tmp->next;
        }
        out->next = nullptr;

        return outHead;
    }
};