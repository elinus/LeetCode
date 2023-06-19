#include "ListNode.h"
#include "stdc++.h"

using namespace std;

class Solution {
   public:
    ListNode* recReverseList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* node = recReverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return node;
    }

    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *prev{nullptr}, *curr{head}, *next{nullptr};
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};