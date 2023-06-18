#include "struct/singly-linked-list.h"

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int carry = 0;
        ListNode *sum = new ListNode(l1->val + l2->val);

        carry = sum->val / 10;
        if (sum->val / 10 >= 1) {
            sum->val %= 10;
        }
        l1 = l1->next;
        l2 = l2->next;

        ListNode *newhead = sum;
        ListNode *tmp = sum;

        while (l1 && l2) {
            sum = new ListNode(l1->val + l2->val + carry);
            tmp->next = sum;
            tmp = tmp->next;
            carry = (tmp->val) / 10;
            if ((tmp->val) / 10 >= 1) {
                tmp->val %= 10;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        if (!l1 && !l2) {
            if (carry) {
                sum = new ListNode(carry);
                tmp->next = sum;
                tmp = tmp->next;
            }
        }

        if (l1) {
            while (l1) {
                sum = new ListNode(l1->val + carry);
                tmp->next = sum;
                tmp = tmp->next;
                carry = (tmp->val) / 10;
                if ((tmp->val) / 10 >= 1) {
                    tmp->val %= 10;
                }
                l1 = l1->next;
            }
            if (carry) {
                sum = new ListNode(carry);
                tmp->next = sum;
                tmp = tmp->next;
            }
        }

        if (l2) {
            while (l2) {
                sum = new ListNode(l2->val + carry);
                tmp->next = sum;
                tmp = tmp->next;
                carry = (tmp->val) / 10;
                if ((tmp->val) / 10 >= 1) {
                    tmp->val %= 10;
                }
                l2 = l2->next;
            }
            if (carry) {
                sum = new ListNode(carry);
                tmp->next = sum;
                tmp = tmp->next;
            }
        }

        return newhead;
    }
};