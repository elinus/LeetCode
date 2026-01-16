#include <iostream>

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  /**
   * Time complexity = O(N)
   * Space complexity = O(1)
   */
  ListNode *reverseList(ListNode *head) {
    ListNode *prev_node{nullptr}, *curr_node{head}, *next_node{nullptr};
    while (curr_node) {
      next_node = curr_node->next;
      curr_node->next = prev_node;
      prev_node = curr_node;
      curr_node = next_node;
    }

    return prev_node;
  }
};

// Recursive approach
ListNode *reverseList(ListNode *head) {
  if (head == nullptr && head->next == nullptr)
    return head;
  ListNode *rev_head = reverseList(head->next);
  head->next->next = head;
  head->next = nullptr;
  return rev_head;
}