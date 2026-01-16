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
   * Time complexity O(N)
   * Space complexity O(1)
   */
  ListNode *middleNode(ListNode *head) {
    ListNode *mid_node{head}, *curr_node{head};
    int count{0};
    while (curr_node) {
      if (count & 1)
        mid_node = mid_node->next;
      count++;
      curr_node = curr_node->next;
    }
    return mid_node;
  }
};

// Two pointer approach
/**
 * Time complexity O(N)
 * Space complexity O(1)
 */
ListNode *middleNode(ListNode *head) {
  ListNode *slow_ptr{head}, *fast_ptr{head};
  while (fast_ptr && fast_ptr->next) {
    slow_ptr = slow_ptr->next;
    fast_ptr = fast_ptr->next->next;
  }
  return slow_ptr;
}