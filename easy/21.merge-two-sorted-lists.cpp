#include "struct/singly-linked-list.h"

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if (!l1) {
            return l2;
        }
        if (!l2) {
            return l1;
        }

        ListNode *newhead = nullptr;

        if (l1->val <= l2->val) {
            newhead = l1;
            l1 = l1->next;
        }
        else {
            newhead = l2;
            l2 = l2->next;
        }

        ListNode *tmp = newhead;

        while (l1 && l2) {
            if (l1->val <= l2->val) {
                tmp->next = l1;
                l1 = l1->next;
            }
            else {
                tmp->next = l2;
                l2 = l2->next;
            }
            tmp = tmp->next;
        }
        if (l1) {
            tmp->next = l1;
        }
        if (l2) {
            tmp->next = l2;
        }

        return newhead;
    }
};